using System;
using System.Data;
using System.Data.OleDb;
using System.Windows.Forms;

namespace ARegister
{
    public class Sql
    {
        private OleDbConnection con;
        private OleDbDataAdapter ole;
        public Sql(String name)
        {
            String connetionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=" + name + ".accdb";

            try
            {
                connetionString += ";Persist Security Info=True";

                con = new OleDbConnection(connetionString);
                ole = new OleDbDataAdapter();
            }
            catch (Exception ex)
            {
                MessageBox.Show(ex.Message, connetionString);
            }
        }

        public DataTable QueryFieldNames(String tableName)
        {
            DataTable table = new DataTable();
            try
            {
                if (con != null && ole != null)
                {
                    con.Open();
                    String cmd = "select * from " + tableName;
                    ole.SelectCommand = new OleDbCommand(cmd, con);
                    OleDbDataReader reader = ole.SelectCommand.ExecuteReader(CommandBehavior.SchemaOnly);
                    table = reader.GetSchemaTable();
                }
            }
            catch (Exception ex)
            {
                MessageBox.Show(ex.Message, "Database Description");
            }
            finally
            {
                con.Close();
            }

            return table;
        }

        public DataTable Query(String cmd)
        {
            DataTable table = new DataTable();
            try
            {
                if (con != null && ole != null)
                {
                    con.Open();
                    ole.SelectCommand = new OleDbCommand(cmd, con);
                    ole.SelectCommand.ExecuteNonQuery();
                    ole.Fill(table);
                }
            }
            catch (Exception ex)
            {
                MessageBox.Show(cmd + "\r\n" + ex.Message, "Query");
            }
            finally
            {
                con.Close();
            }

            return table;
        }

        int RecordCount(String tableName)
        {
            DataTable table = new DataTable();
            try
            {
                if (con != null && ole != null)
                {
                    con.Open();
                    String cmd = "select count(*) from " + tableName;
                    ole.SelectCommand = new OleDbCommand(cmd, con);
                    ole.SelectCommand.ExecuteNonQuery();
                    ole.Fill(table);
                }
            }
            catch (Exception ex)
            {
                MessageBox.Show(ex.Message, "RecordCount: Database Operation");
            }
            finally
            {
                con.Close();
            }

            return Convert.ToInt32(table.Rows[0][0]);
        }

        int RecordCount(String tableName, String cdnName)
        {
            DataTable table = new DataTable();
            try
            {
                if (con != null && ole != null)
                {
                    con.Open();
                    String cmd = "select count(*) from " + tableName + " where " + cdnName;
                    ole.SelectCommand = new OleDbCommand(cmd, con);
                    ole.SelectCommand.ExecuteNonQuery();
                    ole.Fill(table);
                }
            }
            catch (Exception ex)
            {
                MessageBox.Show(ex.Message, "RecordCount: Database Operation");
            }
            finally
            {
                con.Close();
            }

            return Convert.ToInt32(table.Rows[0][0]);
        }

        DataTable DatabaseTableFieldValue(String tblName, String fldName, String value)
        {
            DataTable table = new DataTable();

            try
            {
                if (con != null && ole != null)
                {
                    con.Open();
                    String cmd = "select Distinct " + fldName + " from " + tblName + " where " + fldName + " like '" + value + "%' order by " + fldName;
                    ole.SelectCommand = new OleDbCommand(cmd, con);
                    ole.SelectCommand.ExecuteNonQuery();
                    ole.Fill(table);
                }
            }
            catch (Exception ex)
            {
                MessageBox.Show(ex.Message, "DatabaseTableFieldValue: Database Operation");
            }
            finally
            {
                con.Close();
            }

            return table;
        }

        DataTable DatabaseTableQuery(String tblName, String cdnName)
        {
            DataTable table = new DataTable();
            try
            {
                if (con != null && ole != null)
                {
                    con.Open();
                    String cmd = "select * from " + tblName + " where " + cdnName;
                    ole.SelectCommand = new OleDbCommand(cmd, con);
                    ole.SelectCommand.ExecuteNonQuery();
                    ole.Fill(table);
                }
            }
            catch (Exception ex)
            {
                MessageBox.Show(ex.Message, "DatabaseTableQuery: Database Operation on table " + tblName);
            }
            finally
            {
                con.Close();
            }

            return table;
        }

        public void Insert(String tblName, String list)
        {
            try
            {
                if (con != null && ole != null)
                {
                    con.Open();
                    String cmd = "insert into " + tblName + " values(" + list + ")";
                    ole.InsertCommand = new OleDbCommand(cmd, con);
                    ole.InsertCommand.ExecuteNonQuery();
                }
            }
            catch (Exception ex)
            {
                MessageBox.Show(ex.Message, "DatabaseTableInsert: Database Operation");
            }
            finally
            {
                con.Close();
            }
        }

        DataTable DatabaseMultipleEntries(String tblName, String group)
        {
            DataTable table = new DataTable();
            try
            {
                if (con != null && ole != null)
                {
                    con.Open();
                    String cmd = "select " + group + " from " + tblName + " group by " + group + " having count(*) > 1;";
                    ole.SelectCommand = new OleDbCommand(cmd, con);
                    ole.SelectCommand.ExecuteNonQuery();
                    ole.Fill(table);
                }
            }
            catch (Exception ex)
            {
                MessageBox.Show(ex.Message, "DatabaseMultipleEntries: Database Operation");
            }
            finally
            {
                con.Close();
            }

            return table;
        }

        public int DatabaseUpdate(String cmd)
        {
            int result = 0;
            try
            {
                if (con != null && ole != null)
                {
                    con.Open();
                    ole.SelectCommand = new OleDbCommand(cmd, con);
                    result = ole.SelectCommand.ExecuteNonQuery();
                }
            }
            catch (Exception ex)
            {
                MessageBox.Show(ex.Message, "DatabaseUpdate: Database Operation");
            }
            finally
            {
                con.Close();
            }

            return result;
        }
    }
}
