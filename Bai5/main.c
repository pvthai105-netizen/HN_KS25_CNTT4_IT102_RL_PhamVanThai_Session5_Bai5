#include <stdio.h>

int main() {
    int phi_kham[10] = {150000, 300000, 200000, 500000};
    int so_luong = 4;

    int vi_tri_sua = 1;
    int gia_tri_moi = 350000;

    int phi_kham_moi = 250000;

    int vi_tri_xoa = 0;

    int tong_chi_phi;

    // Tính tổng chi phí của 2 ca khám đầu tiên
    tong_chi_phi = phi_kham[0] + phi_kham[1];

    printf("Tong chi phi 2 ca dau: %d VND\n", tong_chi_phi);

    // Cập nhật chi phí tại vị trí 1
    if (vi_tri_sua >= 0 && vi_tri_sua < so_luong) {
        phi_kham[vi_tri_sua] = gia_tri_moi;

        printf("Sau khi sua vi tri %d: Chi phi moi = %d VND\n",
               vi_tri_sua, phi_kham[vi_tri_sua]);
    }

    // Thêm ca khám mới vào cuối mảng
    if (so_luong < 10) {
        phi_kham[so_luong] = phi_kham_moi;
        so_luong++;

        printf("Sau khi them ca moi: So luong = %d, Chi phi ca cuoi = %d VND\n",
               so_luong, phi_kham[so_luong - 1]);
    }

    // Xóa phần tử tại vị trí vi_tri_xoa
    if (vi_tri_xoa >= 0 && vi_tri_xoa < so_luong) {

        // Dồn các phần tử phía sau sang trái
        for (int i = vi_tri_xoa; i < so_luong - 1; i++) {
            phi_kham[i] = phi_kham[i + 1];
        }

        so_luong--;

        printf("Sau khi xoa vi tri %d: So luong = %d, Chi phi vi tri 0 moi = %d VND\n",
               vi_tri_xoa, so_luong, phi_kham[vi_tri_xoa]);

    } else {
        printf("Loi: Vi tri xoa %d khong hop le!\n", vi_tri_xoa);
        printf("So luong ca kham giu nguyen: %d\n", so_luong);
    }

    return 0;
}

