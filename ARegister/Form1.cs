using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Globalization;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.IO;
using System.Windows.Forms;

namespace ARegister
{
    public partial class Form1 : Form
    {
        public Sql sql;
        public DataTable tables;
        public DataTable table;
        public int adno;
        public int stno;
        public bool loop;

        public Form1(String dataFile)
        {
            InitializeComponent();
            String pathFile = Environment.CurrentDirectory + ".\\database\\" + dataFile;
            sql = new Sql(pathFile);
            loop = true;
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            table = sql.Query("Select * from داخلہ order by نمبر");
            if (table.Rows.Count > 0)
            {
                tables = sql.Query("Select * from طلبا order by نمبر");
                if (tables.Rows.Count > 0)
                {
                    SetComboBoxDataSource(cbName,       tables, "نام");
                    SetComboBoxDataSource(cbFName,      tables, "ولد");
                    SetComboBoxDataSource(cbOccupation, tables, "پیشہ");
                    SetComboBoxDataSource(cbCaste,      tables, "ذات");
                    SetComboBoxDataSource(cbAddress,    tables, "پتہ");
                    dateDOB.Value = Convert.ToDateTime( tables.Rows[0]["پیدائش"]);
                    stno = tables.Rows.Count;
                }
                adno = table.Rows.Count;
            }
        }

	    void SetComboBoxDataSource(ComboBox cb, DataTable table, String dispMember) {
            cb.DataSource    = table;
            cb.DisplayMember = dispMember;
	    }

        private void cbName_SelectedIndexChanged(object sender, EventArgs e)
        {
            DataTable table1 = sql.Query("Select * from داخلہ where حوالہ=" + tables.Rows[cbName.SelectedIndex]["نمبر"].ToString());
            Int32 index = Convert.ToInt32(table1.Rows[0]["نمبر"]) - 1;

            if (table.Rows.Count > index)
            {
                if (!loop) loop = true;
                else
                {
                    loop = false;
                    serial.Value = index + 1;
                }

                session.Value = Convert.ToUInt32(table.Rows[index]["سال"]);
                inClass.Value = Convert.ToUInt32(table.Rows[index]["جماعت"]);
                dateDOA.Value = Convert.ToDateTime(table.Rows[index]["تاریخ"]);
                exClass.Value = Convert.ToUInt32(table.Rows[index]["تاجماعت"]);
                dateDOE.Value = Convert.ToDateTime(table.Rows[index]["تاتاریخ"]);
                status.Value = Convert.ToUInt32(table.Rows[index]["کیفیت"]);
            }
        }

        private void serial_ValueChanged(object sender, EventArgs e)
        {
            Int32 index = Convert.ToInt32(serial.Value) - 1;
            if (table.Rows.Count > index)
            {
                index = Convert.ToInt32(table.Rows[index]["حوالہ"]);

                if (!loop) loop = true;
                else
                {
                    loop = false;
                    cbName.SelectedIndex = index - 1;
                }

                dateDOB.Value = Convert.ToDateTime(tables.Rows[index - 1]["پیدائش"]);
                labelNumber.Text = index.ToString();

                SetMyColor(System.Drawing.Color.Black);
            }
            else
            {
                //if (!checkBoxNavigation.Checked) 
                    serial.Value = table.Rows.Count;
            //    else
            //    {
            //        if (table.Rows.Count >= index)
            //        {
            //            SetMyColor(System.Drawing.Color.LightGray);
            //        }
            //        else serial.Value = table.Rows.Count + 1;
            //    }
            }
        }

        private void session_ValueChanged(object sender, EventArgs e)
        {
            //Int32 index = Convert.ToInt32(session.Value);
            //DataTable table1 = sql.Query("Select * from داخلہ where سال=" + index.ToString());
            //if (table1.Rows.Count > 0)
            //{
            //    cbName.SelectedIndex = Convert.ToInt32(table1.Rows[0]["نمبر"]) - 1;
            //}
        }

        private void next_Click(object sender, EventArgs e)
        {
            //String str;
            //DataTable table = sql.Query("Select * from طلبا where (نام like '" + cbName.Text + "')" +
            //                                                " and (ولد like '" + cbFName.Text + "')" +
            //                                                " and (ذات like '" + cbCaste.Text + "')" +
            //                                                " and (پتہ like '" + cbAddress.Text + "')");
            //int side;
            //if (table.Rows.Count > 0)
            //{
            //    side = Convert.ToInt32(table.Rows[0]["نمبر"]);
            //}
            //else
            //{
            //    side = ++stno;
            //    str = StudentData(side, cbName.Text, cbFName.Text, dateDOB.Value, cbOccupation.Text, cbCaste.Text, cbAddress.Text);
            //    log(str);
            //    sql.Insert("طلبا", str);
            //}

            //str = AdmissionData(++adno, session.Value, inClass.Value, dateDOA.Value, exClass.Value, dateDOE.Value, status.Value, side);
            //log(str);
            //sql.Insert("داخلہ", str);
        }

        public String StudentData(int srno, String sname, String fname, DateTime dob, String occupation, String caste, String address)
        {
            StringBuilder sb = new StringBuilder();
            sb.Append(srno.ToString() + ",'");
            sb.Append(sname + "','");
            sb.Append(fname + "',#");
            sb.Append(dob.ToString("d", new CultureInfo("en-US")) + "#,'");
            sb.Append(caste   + "','");
            sb.Append(occupation + "','");
            sb.Append(address + "'");

            return sb.ToString();
        }

        public String AdmissionData(int srno, decimal session, decimal class1, DateTime date1, decimal class2, DateTime date2, decimal reason, int reference)
        {
            StringBuilder sb = new StringBuilder();
            sb.Append(srno.ToString()    + ",");
            sb.Append(session.ToString() + ",");
            sb.Append(class1.ToString()  + ",#");
            sb.Append(date1.ToString("d", new CultureInfo("en-US")) + "#,");
            sb.Append(class2.ToString()  + ",#");
            sb.Append(date2.ToString("d", new CultureInfo("en-US")) + "#,");
            sb.Append(reason.ToString()  + ",");
            sb.Append(reference.ToString());

            return sb.ToString();
        }

        private void checkBoxNavigation_CheckedChanged(object sender, EventArgs e)
        {
//            next.Enabled = checkBoxNavigation.Checked;
        }

        private void SetMyColor(System.Drawing.Color color)
        {
            cbName.ForeColor       = color;
            //dateDOB.ForeColor      = color;
            cbFName.ForeColor      = color;
            cbOccupation.ForeColor = color;
            cbCaste.ForeColor      = color;
            cbAddress.ForeColor    = color;

            session.ForeColor = color;
            inClass.ForeColor = color;
            //dateDOA.ForeColor = color;
            exClass.ForeColor = color;
            //dateDOE.ForeColor = color;
            status.ForeColor  = color;
        }

        private void log(String text)
        {
            String file = "book.log";
            StreamWriter writer = new StreamWriter(file, true, Encoding.Unicode);
            try
            {
                writer.WriteLine(text);
            }
            catch (Exception ex)
            {
                MessageBox.Show(ex.Message, "Error");
            }
            finally
            {
                writer.Close();
            }
        }
    }
}
