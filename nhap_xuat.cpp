// Nhap 1 mon hoc
void MonHoc::nhap(){
	cout << "Nhap ma mon hoc: ";
	cin >> Ma_Mon;
	cin.ignore();
	cout << "Nhap ten mon hoc: ";
	getline(cin, Ten_Mon);
	cout << "Nhap so tin chi: ";
	cin >> So_Tin;
	cout << "Nhap ngay thi: ";
	cin >> Ngay_Thi;
	cout << "Nhap ca thi: ";
	cin >> Ca_Thi;
	cout << "Nhap phong thi: ";
	cin >> Phong_Thi;
	cout << "Nhap so luong sinh vien dang ky: ";
	cin >> So_Sinh_Vien;
}
// Xuat 1 mon hoc
void MonHoc::xuat() const{
           cout << left
                << setw(12) << Ma_Mon
                << setw(30) << Ten_Mon
                << setw(10) << So_Tin
                << setw(15) << Ngay_Thi
                << setw(10) << Ca_Thi
                << setw(15) << Phong_Thi
                << setw(12) << So_Sinh_Vien
                << endl;
}
// ham ban nhap danh sach
void nhap_ds(MonHoc ds[], int &n){
	do{
		cout << "Nhap so luong mon hoc n (0 < n < 200): ";
		cin >> n;
	} while (n <= 0 || n >= 200);

	for (int i = 0; i < n; i++) {
		cout << "\nNhap mon hoc thu " << i + 1 << ":\n";
		ds[i].nhap();
	}
}
// ham in tieu de
void xuat_tieu_de(){
    cout << left
         << setw(12) << "Ma mon"
         << setw(30) << "Ten mon"
         << setw(10) << "So TC"
         << setw(15) << "Ngay thi"
         << setw(10) << "Ca thi"
         << setw(15) << "Phong thi"
         << setw(12) << "So SV"
         << endl;
}
// Xuat danh sach mon hoc
void xuat_ds(const MonHoc ds[], int n){
	cout << "\nDanh sach mon hoc \n";
	xuat_tieu_de();
    for(int i = 0; i < n; i++)
        ds[i].xuat();
}