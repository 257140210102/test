// Bo sung mon hoc a vao danh sach mon hoc tai vi tri vi_tri
void bo_sung(MonHoc ds[], int &n, int vi_tri, const MonHoc &a) {
    if (n >= 200) { // kiem tra danh sach da day hay chua
        cout << "Danh sach da day, khong the bo sung!\n";
        return;
    }
    if (vi_tri < 0 || vi_tri > n) {
            // kiem tra vi tri bo sung co hop le hay khong
        cout << "Vi tri khong hop le!\n";
        return;
    }
    // dich chuyen cac mon hoc tu vi tri vi_tri tro ve sau 1 vi tri de tao cho mon hoc moi
    for (int i = n; i > vi_tri; i--)
        ds[i] = ds[i - 1];
    ds[vi_tri] = a; // bo sung mon hoc moi vao vi tri vi_tri
    n++;
    cout<< "danh sach sau khi bo sung tai vi tri " << vi_tri << ":\n";
    xuat_ds(ds, n);
}
// xoa mon hoc tai vi tri vi_tri
void xoa(MonHoc ds[], int &n, int vi_tri) {
    if (n == 0) { // kiem tra danh sach co rong hay khong
        cout << "Danh sach rong, khong the xoa!\n";
        return;
    }
    if (vi_tri < 0 || vi_tri >= n) {
            // kiem tra vi tri xoa co hop le hay khong
        cout << "Vi tri khong hop le!\n";
        return;
    }
    // dich chuyen cac mon hoc tu vi tri vi_tri+1 tro ve truoc 1 vi tri de xoa mon hoc tai vi tri vi_tri
    for (int i = vi_tri; i < n - 1; i++)
        ds[i] = ds[i + 1];
    n--; // giam so luong mon hoc trong danh sach
    cout<< "danh sach sau khi xoa tai vi tri "<< vi_tri << ":\n";
    xuat_ds(ds, n);
}