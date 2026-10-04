// so sanh 2 ngay thi cua 2 mon hoc
int so_sanh_theo_ngay(const MonHoc &a, const MonHoc &b){ //12/02/2026 11/02/2026
    string nam_thang_ngay_a, nam_thang_ngay_b;// Chuyen ngay thi sang dinh dang YYYYMMDD de so sanh
    nam_thang_ngay_a = a.Ngay_Thi.substr(6, 4) +
    a.Ngay_Thi.substr(3, 2)
    + a.Ngay_Thi.substr(0, 2);
    nam_thang_ngay_b = b.Ngay_Thi.substr(6, 4) + b.Ngay_Thi.substr(3, 2) + b.Ngay_Thi.substr(0, 2);
    if(nam_thang_ngay_a < nam_thang_ngay_b) //20260212 20260211
        return -1; // neu ngay thi cua mon a nho hon ngay thi cua mon b thi tra ve -1
    if(nam_thang_ngay_a > nam_thang_ngay_b)
        return 1; // neu ngay thi cua mon a lon hon ngay thi cua mon b thi tra ve 1
    return 0; // neu ngay thi cua mon a bang ngay thi cua mon b thi tra ve 0
}
// sap xep danh sach mon hoc theo ngay thi tang dan
void sap_xep(MonHoc ds[], int n){
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(so_sanh_theo_ngay(ds[i], ds[j]) > 0){
                MonHoc temp = ds[i]; // hoan doi 2 mon hoc neu ngay thi cua mon i lon hon ngay thi cua mon j
                ds[i] = ds[j];
                ds[j] = temp;
            }
        }
    }
    cout << "Danh sach da duoc sap xep theo ngay thi.\n";
    xuat_ds(ds,n);
}