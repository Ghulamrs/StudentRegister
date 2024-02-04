namespace ARegister
{
    partial class Form1
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.tabControl = new System.Windows.Forms.TabControl();
            this.admFormPage = new System.Windows.Forms.TabPage();
            this.labelNumber = new System.Windows.Forms.Label();
            this.next = new System.Windows.Forms.Button();
            this.labelStatus = new System.Windows.Forms.Label();
            this.status = new System.Windows.Forms.NumericUpDown();
            this.labelDOE = new System.Windows.Forms.Label();
            this.dateDOE = new System.Windows.Forms.DateTimePicker();
            this.labelClassEx = new System.Windows.Forms.Label();
            this.exClass = new System.Windows.Forms.NumericUpDown();
            this.labelDOA = new System.Windows.Forms.Label();
            this.dateDOA = new System.Windows.Forms.DateTimePicker();
            this.labelClassIn = new System.Windows.Forms.Label();
            this.inClass = new System.Windows.Forms.NumericUpDown();
            this.labelSession = new System.Windows.Forms.Label();
            this.session = new System.Windows.Forms.NumericUpDown();
            this.labelAddress = new System.Windows.Forms.Label();
            this.labelCaste = new System.Windows.Forms.Label();
            this.labelOccupation = new System.Windows.Forms.Label();
            this.cbAddress = new System.Windows.Forms.ComboBox();
            this.cbCaste = new System.Windows.Forms.ComboBox();
            this.cbOccupation = new System.Windows.Forms.ComboBox();
            this.labelSerial = new System.Windows.Forms.Label();
            this.serial = new System.Windows.Forms.NumericUpDown();
            this.labelDOB = new System.Windows.Forms.Label();
            this.dateDOB = new System.Windows.Forms.DateTimePicker();
            this.labelFatherName = new System.Windows.Forms.Label();
            this.labelName = new System.Windows.Forms.Label();
            this.cbFName = new System.Windows.Forms.ComboBox();
            this.cbName = new System.Windows.Forms.ComboBox();
            this.tabControl.SuspendLayout();
            this.admFormPage.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.status)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.exClass)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.inClass)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.session)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.serial)).BeginInit();
            this.SuspendLayout();
            // 
            // tabControl
            // 
            this.tabControl.Controls.Add(this.admFormPage);
            this.tabControl.Dock = System.Windows.Forms.DockStyle.Fill;
            this.tabControl.Location = new System.Drawing.Point(0, 0);
            this.tabControl.Name = "tabControl";
            this.tabControl.RightToLeftLayout = true;
            this.tabControl.SelectedIndex = 0;
            this.tabControl.Size = new System.Drawing.Size(537, 384);
            this.tabControl.TabIndex = 14;
            // 
            // admFormPage
            // 
            this.admFormPage.BackColor = System.Drawing.Color.Transparent;
            this.admFormPage.BackgroundImageLayout = System.Windows.Forms.ImageLayout.Stretch;
            this.admFormPage.Controls.Add(this.labelNumber);
            this.admFormPage.Controls.Add(this.next);
            this.admFormPage.Controls.Add(this.labelStatus);
            this.admFormPage.Controls.Add(this.status);
            this.admFormPage.Controls.Add(this.labelDOE);
            this.admFormPage.Controls.Add(this.dateDOE);
            this.admFormPage.Controls.Add(this.labelClassEx);
            this.admFormPage.Controls.Add(this.exClass);
            this.admFormPage.Controls.Add(this.labelDOA);
            this.admFormPage.Controls.Add(this.dateDOA);
            this.admFormPage.Controls.Add(this.labelClassIn);
            this.admFormPage.Controls.Add(this.inClass);
            this.admFormPage.Controls.Add(this.labelSession);
            this.admFormPage.Controls.Add(this.session);
            this.admFormPage.Controls.Add(this.labelAddress);
            this.admFormPage.Controls.Add(this.labelCaste);
            this.admFormPage.Controls.Add(this.labelOccupation);
            this.admFormPage.Controls.Add(this.cbAddress);
            this.admFormPage.Controls.Add(this.cbCaste);
            this.admFormPage.Controls.Add(this.cbOccupation);
            this.admFormPage.Controls.Add(this.labelSerial);
            this.admFormPage.Controls.Add(this.serial);
            this.admFormPage.Controls.Add(this.labelDOB);
            this.admFormPage.Controls.Add(this.dateDOB);
            this.admFormPage.Controls.Add(this.labelFatherName);
            this.admFormPage.Controls.Add(this.labelName);
            this.admFormPage.Controls.Add(this.cbFName);
            this.admFormPage.Controls.Add(this.cbName);
            this.admFormPage.Location = new System.Drawing.Point(4, 39);
            this.admFormPage.Name = "admFormPage";
            this.admFormPage.Padding = new System.Windows.Forms.Padding(3);
            this.admFormPage.Size = new System.Drawing.Size(529, 341);
            this.admFormPage.TabIndex = 0;
            this.admFormPage.Text = "داخلہ فارم";
            // 
            // labelNumber
            // 
            this.labelNumber.Font = new System.Drawing.Font("Arial", 12.06283F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.labelNumber.ForeColor = System.Drawing.SystemColors.ButtonShadow;
            this.labelNumber.Location = new System.Drawing.Point(298, 17);
            this.labelNumber.Margin = new System.Windows.Forms.Padding(3);
            this.labelNumber.Name = "labelNumber";
            this.labelNumber.RightToLeft = System.Windows.Forms.RightToLeft.No;
            this.labelNumber.Size = new System.Drawing.Size(62, 19);
            this.labelNumber.TabIndex = 41;
            this.labelNumber.Text = "1";
            this.labelNumber.TextAlign = System.Drawing.ContentAlignment.MiddleRight;
            // 
            // next
            // 
            this.next.Enabled = false;
            this.next.Font = new System.Drawing.Font("Alvi Nastaleeq", 15.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.next.ForeColor = System.Drawing.Color.Green;
            this.next.Location = new System.Drawing.Point(203, 288);
            this.next.Name = "next";
            this.next.Size = new System.Drawing.Size(89, 41);
            this.next.TabIndex = 40;
            this.next.Text = "درج کریں";
            this.next.UseVisualStyleBackColor = true;
            this.next.Visible = false;
            this.next.Click += new System.EventHandler(this.next_Click);
            // 
            // labelStatus
            // 
            this.labelStatus.AutoSize = true;
            this.labelStatus.Location = new System.Drawing.Point(138, 294);
            this.labelStatus.Name = "labelStatus";
            this.labelStatus.Size = new System.Drawing.Size(59, 30);
            this.labelStatus.TabIndex = 39;
            this.labelStatus.Text = "وجہ اخراج";
            // 
            // status
            // 
            this.status.Font = new System.Drawing.Font("Arial", 12.06283F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.status.Location = new System.Drawing.Point(80, 297);
            this.status.Maximum = new decimal(new int[] {
            255,
            0,
            0,
            0});
            this.status.Name = "status";
            this.status.RightToLeft = System.Windows.Forms.RightToLeft.No;
            this.status.Size = new System.Drawing.Size(52, 26);
            this.status.TabIndex = 38;
            // 
            // labelDOE
            // 
            this.labelDOE.AutoSize = true;
            this.labelDOE.Location = new System.Drawing.Point(138, 241);
            this.labelDOE.Name = "labelDOE";
            this.labelDOE.Size = new System.Drawing.Size(66, 30);
            this.labelDOE.TabIndex = 37;
            this.labelDOE.Text = "تاریخ خارجہ";
            // 
            // dateDOE
            // 
            this.dateDOE.CustomFormat = "dd/MM/yyyy";
            this.dateDOE.Font = new System.Drawing.Font("Arial", 12.06283F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.dateDOE.Format = System.Windows.Forms.DateTimePickerFormat.Custom;
            this.dateDOE.Location = new System.Drawing.Point(24, 243);
            this.dateDOE.Name = "dateDOE";
            this.dateDOE.Size = new System.Drawing.Size(108, 26);
            this.dateDOE.TabIndex = 36;
            // 
            // labelClassEx
            // 
            this.labelClassEx.AutoSize = true;
            this.labelClassEx.Location = new System.Drawing.Point(138, 204);
            this.labelClassEx.Name = "labelClassEx";
            this.labelClassEx.Size = new System.Drawing.Size(74, 30);
            this.labelClassEx.TabIndex = 35;
            this.labelClassEx.Text = "جماعت خارجہ";
            // 
            // exClass
            // 
            this.exClass.Font = new System.Drawing.Font("Arial", 12.06283F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.exClass.Location = new System.Drawing.Point(90, 204);
            this.exClass.Maximum = new decimal(new int[] {
            10,
            0,
            0,
            0});
            this.exClass.Minimum = new decimal(new int[] {
            1,
            0,
            0,
            0});
            this.exClass.Name = "exClass";
            this.exClass.RightToLeft = System.Windows.Forms.RightToLeft.No;
            this.exClass.Size = new System.Drawing.Size(42, 26);
            this.exClass.TabIndex = 34;
            this.exClass.Value = new decimal(new int[] {
            1,
            0,
            0,
            0});
            // 
            // labelDOA
            // 
            this.labelDOA.AutoSize = true;
            this.labelDOA.Location = new System.Drawing.Point(138, 98);
            this.labelDOA.Name = "labelDOA";
            this.labelDOA.Size = new System.Drawing.Size(64, 30);
            this.labelDOA.TabIndex = 33;
            this.labelDOA.Text = "تاریخ داخلہ";
            // 
            // dateDOA
            // 
            this.dateDOA.CustomFormat = "dd/MM/yyyy";
            this.dateDOA.Font = new System.Drawing.Font("Arial", 12.06283F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.dateDOA.Format = System.Windows.Forms.DateTimePickerFormat.Custom;
            this.dateDOA.Location = new System.Drawing.Point(24, 100);
            this.dateDOA.Name = "dateDOA";
            this.dateDOA.Size = new System.Drawing.Size(108, 26);
            this.dateDOA.TabIndex = 32;
            // 
            // labelClassIn
            // 
            this.labelClassIn.AutoSize = true;
            this.labelClassIn.Location = new System.Drawing.Point(138, 63);
            this.labelClassIn.Name = "labelClassIn";
            this.labelClassIn.Size = new System.Drawing.Size(72, 30);
            this.labelClassIn.TabIndex = 31;
            this.labelClassIn.Text = "جماعت داخلہ";
            // 
            // inClass
            // 
            this.inClass.Font = new System.Drawing.Font("Arial", 12.06283F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.inClass.Location = new System.Drawing.Point(90, 63);
            this.inClass.Maximum = new decimal(new int[] {
            10,
            0,
            0,
            0});
            this.inClass.Minimum = new decimal(new int[] {
            1,
            0,
            0,
            0});
            this.inClass.Name = "inClass";
            this.inClass.RightToLeft = System.Windows.Forms.RightToLeft.No;
            this.inClass.Size = new System.Drawing.Size(42, 26);
            this.inClass.TabIndex = 30;
            this.inClass.Value = new decimal(new int[] {
            1,
            0,
            0,
            0});
            // 
            // labelSession
            // 
            this.labelSession.AutoSize = true;
            this.labelSession.Location = new System.Drawing.Point(138, 17);
            this.labelSession.Name = "labelSession";
            this.labelSession.Size = new System.Drawing.Size(59, 30);
            this.labelSession.TabIndex = 29;
            this.labelSession.Text = "سیشن نمبر";
            // 
            // session
            // 
            this.session.Font = new System.Drawing.Font("Arial", 12.06283F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.session.Location = new System.Drawing.Point(70, 17);
            this.session.Maximum = new decimal(new int[] {
            2100,
            0,
            0,
            0});
            this.session.Minimum = new decimal(new int[] {
            1,
            0,
            0,
            0});
            this.session.Name = "session";
            this.session.RightToLeft = System.Windows.Forms.RightToLeft.No;
            this.session.Size = new System.Drawing.Size(62, 26);
            this.session.TabIndex = 28;
            this.session.Value = new decimal(new int[] {
            1,
            0,
            0,
            0});
            this.session.ValueChanged += new System.EventHandler(this.session_ValueChanged);
            // 
            // labelAddress
            // 
            this.labelAddress.AutoSize = true;
            this.labelAddress.Location = new System.Drawing.Point(430, 291);
            this.labelAddress.Name = "labelAddress";
            this.labelAddress.Size = new System.Drawing.Size(58, 30);
            this.labelAddress.TabIndex = 27;
            this.labelAddress.Text = "پتہ یا گا‌ؤں‎‏";
            // 
            // labelCaste
            // 
            this.labelCaste.AutoSize = true;
            this.labelCaste.Location = new System.Drawing.Point(433, 245);
            this.labelCaste.Name = "labelCaste";
            this.labelCaste.Size = new System.Drawing.Size(76, 30);
            this.labelCaste.TabIndex = 26;
            this.labelCaste.Text = "ذات / برادری";
            // 
            // labelOccupation
            // 
            this.labelOccupation.AutoSize = true;
            this.labelOccupation.Location = new System.Drawing.Point(433, 198);
            this.labelOccupation.Name = "labelOccupation";
            this.labelOccupation.Size = new System.Drawing.Size(59, 30);
            this.labelOccupation.TabIndex = 25;
            this.labelOccupation.Text = "والد کا پیشہ";
            // 
            // cbAddress
            // 
            this.cbAddress.FormattingEnabled = true;
            this.cbAddress.Location = new System.Drawing.Point(341, 288);
            this.cbAddress.Margin = new System.Windows.Forms.Padding(3, 7, 3, 7);
            this.cbAddress.Name = "cbAddress";
            this.cbAddress.Size = new System.Drawing.Size(86, 38);
            this.cbAddress.TabIndex = 24;
            // 
            // cbCaste
            // 
            this.cbCaste.FormattingEnabled = true;
            this.cbCaste.Location = new System.Drawing.Point(341, 242);
            this.cbCaste.Margin = new System.Windows.Forms.Padding(3, 7, 3, 7);
            this.cbCaste.Name = "cbCaste";
            this.cbCaste.Size = new System.Drawing.Size(86, 38);
            this.cbCaste.TabIndex = 23;
            // 
            // cbOccupation
            // 
            this.cbOccupation.FormattingEnabled = true;
            this.cbOccupation.Location = new System.Drawing.Point(341, 196);
            this.cbOccupation.Margin = new System.Windows.Forms.Padding(3, 7, 3, 7);
            this.cbOccupation.Name = "cbOccupation";
            this.cbOccupation.Size = new System.Drawing.Size(86, 38);
            this.cbOccupation.TabIndex = 22;
            // 
            // labelSerial
            // 
            this.labelSerial.AutoSize = true;
            this.labelSerial.Location = new System.Drawing.Point(433, 12);
            this.labelSerial.Name = "labelSerial";
            this.labelSerial.Size = new System.Drawing.Size(59, 30);
            this.labelSerial.TabIndex = 21;
            this.labelSerial.Text = "سلسلہ نمبر";
            // 
            // serial
            // 
            this.serial.Font = new System.Drawing.Font("Arial", 12.06283F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.serial.Location = new System.Drawing.Point(366, 15);
            this.serial.Maximum = new decimal(new int[] {
            10000,
            0,
            0,
            0});
            this.serial.Minimum = new decimal(new int[] {
            1,
            0,
            0,
            0});
            this.serial.Name = "serial";
            this.serial.RightToLeft = System.Windows.Forms.RightToLeft.No;
            this.serial.Size = new System.Drawing.Size(61, 26);
            this.serial.TabIndex = 20;
            this.serial.Value = new decimal(new int[] {
            1,
            0,
            0,
            0});
            this.serial.ValueChanged += new System.EventHandler(this.serial_ValueChanged);
            // 
            // labelDOB
            // 
            this.labelDOB.AutoSize = true;
            this.labelDOB.Location = new System.Drawing.Point(433, 98);
            this.labelDOB.Name = "labelDOB";
            this.labelDOB.Size = new System.Drawing.Size(73, 30);
            this.labelDOB.TabIndex = 19;
            this.labelDOB.Text = "تاریخ پیدائش";
            // 
            // dateDOB
            // 
            this.dateDOB.CustomFormat = "dd/MM/yyyy";
            this.dateDOB.Font = new System.Drawing.Font("Arial", 12.06283F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.dateDOB.Format = System.Windows.Forms.DateTimePickerFormat.Custom;
            this.dateDOB.Location = new System.Drawing.Point(319, 100);
            this.dateDOB.Name = "dateDOB";
            this.dateDOB.Size = new System.Drawing.Size(108, 26);
            this.dateDOB.TabIndex = 18;
            // 
            // labelFatherName
            // 
            this.labelFatherName.AutoSize = true;
            this.labelFatherName.Location = new System.Drawing.Point(433, 139);
            this.labelFatherName.Name = "labelFatherName";
            this.labelFatherName.Size = new System.Drawing.Size(55, 30);
            this.labelFatherName.TabIndex = 17;
            this.labelFatherName.Text = "والد کا نام";
            // 
            // labelName
            // 
            this.labelName.AutoSize = true;
            this.labelName.Location = new System.Drawing.Point(433, 55);
            this.labelName.Name = "labelName";
            this.labelName.Size = new System.Drawing.Size(72, 30);
            this.labelName.TabIndex = 16;
            this.labelName.Text = "نام طالب علم";
            // 
            // cbFName
            // 
            this.cbFName.FormattingEnabled = true;
            this.cbFName.Location = new System.Drawing.Point(298, 136);
            this.cbFName.Margin = new System.Windows.Forms.Padding(3, 7, 3, 7);
            this.cbFName.Name = "cbFName";
            this.cbFName.Size = new System.Drawing.Size(129, 38);
            this.cbFName.TabIndex = 15;
            // 
            // cbName
            // 
            this.cbName.FormattingEnabled = true;
            this.cbName.Location = new System.Drawing.Point(298, 52);
            this.cbName.Margin = new System.Windows.Forms.Padding(3, 7, 3, 7);
            this.cbName.Name = "cbName";
            this.cbName.Size = new System.Drawing.Size(129, 38);
            this.cbName.TabIndex = 14;
            this.cbName.SelectedIndexChanged += new System.EventHandler(this.cbName_SelectedIndexChanged);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 30F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(537, 384);
            this.Controls.Add(this.tabControl);
            this.Font = new System.Drawing.Font("Alvi Nastaleeq", 13.94764F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.Margin = new System.Windows.Forms.Padding(3, 7, 3, 7);
            this.Name = "Form1";
            this.RightToLeft = System.Windows.Forms.RightToLeft.Yes;
            this.RightToLeftLayout = true;
            this.Text = "Form1";
            this.Load += new System.EventHandler(this.Form1_Load);
            this.tabControl.ResumeLayout(false);
            this.admFormPage.ResumeLayout(false);
            this.admFormPage.PerformLayout();
            ((System.ComponentModel.ISupportInitialize)(this.status)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.exClass)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.inClass)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.session)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.serial)).EndInit();
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.TabControl tabControl;
        private System.Windows.Forms.TabPage admFormPage;
        private System.Windows.Forms.Label labelAddress;
        private System.Windows.Forms.Label labelCaste;
        private System.Windows.Forms.Label labelOccupation;
        private System.Windows.Forms.ComboBox cbAddress;
        private System.Windows.Forms.ComboBox cbCaste;
        private System.Windows.Forms.ComboBox cbOccupation;
        private System.Windows.Forms.Label labelSerial;
        private System.Windows.Forms.NumericUpDown serial;
        private System.Windows.Forms.Label labelDOB;
        private System.Windows.Forms.DateTimePicker dateDOB;
        private System.Windows.Forms.Label labelFatherName;
        private System.Windows.Forms.Label labelName;
        private System.Windows.Forms.ComboBox cbFName;
        private System.Windows.Forms.ComboBox cbName;
        private System.Windows.Forms.Label labelStatus;
        private System.Windows.Forms.NumericUpDown status;
        private System.Windows.Forms.Label labelDOE;
        private System.Windows.Forms.DateTimePicker dateDOE;
        private System.Windows.Forms.Label labelClassEx;
        private System.Windows.Forms.NumericUpDown exClass;
        private System.Windows.Forms.Label labelDOA;
        private System.Windows.Forms.DateTimePicker dateDOA;
        private System.Windows.Forms.Label labelClassIn;
        private System.Windows.Forms.NumericUpDown inClass;
        private System.Windows.Forms.Label labelSession;
        private System.Windows.Forms.NumericUpDown session;
        private System.Windows.Forms.Button next;
        private System.Windows.Forms.Label labelNumber;

    }
}

