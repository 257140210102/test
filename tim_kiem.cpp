// Tim mon hoc theo ten
void tim_ten_mon(const MonHoc ds[], int n, string ten_mon){
	int check=0;
	for(int i=0; i<n; i++){
		if(ds[i].Ten_Mon == ten_mon){
			if((++check)==1) // neu tim thay mon hoc dau tien thi in ra tieu de
				xuat_tieu_de();
			ds[i].xuat(); // in ra mon hoc tim thay
		}
    }
	if(!check){ // kiem tra neu khong tim thay mon hoc thi in ra thong bao
		cout << "Khong tim thay mon hoc voi ten: " << ten_mon << endl;
	}
}
// Tim mon hoc theo ma mon
void tim_ma_mon(const MonHoc ds[], int n, string ma_mon){
	int check=0;
	for(int i=0; i<n; i++){
		if(ds[i].Ma_Mon == ma_mon){
			if((++check)==1) // neu tim thay mon hoc dau tien thi in ra tieu de
				xuat_tieu_de();
			ds[i].xuat(); // in ra mon hoc tim thay
		}	}
	if(!check){ // kiem tra neu khong tim thay mon hoc thi in ra thong bao
		cout << "Khong tim thay mon hoc voi ma: " << ma_mon << endl;
	}
}