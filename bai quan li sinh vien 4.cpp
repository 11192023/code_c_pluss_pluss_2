/*Xây d?ng chuong trình C d?
1. Luu tr? h? so c?a h?c viên trong co s? dào t?o tin h?c trong t?p STUDENT.DAT. M?i b?n ghi bao g?m
(i) STUDENT-ID (d? nh?n d?ng duy nh?t c?a h?c sinh)
(ii) TÊN H?C SINH
(iii) TÊN KHÓA H?C
(iv) H?C PHÍ
(v) ÐÃ TR? L? PHÍ
(vi) NGÀY NH?P H?C.
2. Ð?c t?p STUDENT.DAT và hi?n th? h? so c?a các sinh viên.
3. Tra c?u m?t sinh viên theo ID sinh viên và hi?n th? thông tin c?a sinh viên dó.
4. Tra c?u m?t sinh viên theo Tên sinh viên và hi?n th? thông tin c?a sinh viên dó.*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct sinhvien{
	int id;
	char ten_hoc_sinh[50];
	char ten_khoa_hoc[50];
	float hoc_phi;
	float da_tra_hoc_phi;
	char ngay_nhap_hoc[50];
};
void nhap_hoc_sinh(){
	struct sinhvien s;
	FILE*fp;
	fp=fopen("student.da","ab");
	printf("nhap id sinh vien: ");
	scanf("%d",&s.id);
	getchar();
	printf("nhap ten sinh vien: ");
	gets(s.ten_hoc_sinh);
	printf("nhap khoa hoc: ");
	gets(s.ten_khoa_hoc);
	printf("hoc phi: ");
	scanf("%f",&s.hoc_phi);
	getchar();
	printf("da tra hoc phi: ");
	scanf("%f",&s.da_tra_hoc_phi);
	getchar();
	printf("ngay nhap hoc: ");
	gets(s.ngay_nhap_hoc);
	fwrite(&s,sizeof(struct sinhvien),1,fp);
	fclose(fp);
}
void danh_sach_sinh_vien(){
	struct sinhvien s;
	FILE*fp;
	fp=fopen("student.da","rb");
	printf("id\tten sinh vien\tten khoa hoc\thoc phi\tda tra hoc phi\tngay nhap hoc");
	while(fread(&s,sizeof(struct sinhvien),1,fp)==1){
	     printf("\n%d\t%s\t%s\t%f\t%f\t%s",s.id,s.ten_hoc_sinh,s.ten_khoa_hoc,s.hoc_phi,s.da_tra_hoc_phi,s.ngay_nhap_hoc);
	}
	fclose(fp);
}
void tim_kiem_id(unsigned int id){
	struct sinhvien s;
	FILE*fp;
	fp=fopen("student.da","rb");
	if(fp==NULL){
		printf("khong the mo file\n");
		return ;
	}
	int found =0;
	while(fread(&s,sizeof(struct sinhvien),1,fp)==1){
		if(s.id==id){
			printf("id\tten sinh vien\tten khoa hoc\thoc phi\tda tra hoc phi\tngay nhap hoc");
			 printf("\n%d\t%s\t%s\t%f\t%f\t%s",s.id,s.ten_hoc_sinh,s.ten_khoa_hoc,s.hoc_phi,s.da_tra_hoc_phi,s.ngay_nhap_hoc);
			 found=1;
		}
	}
	if(!found){
	printf("khong tim thay ho so sinh vien\n");
	}
	fclose(fp);
}
void tim_kiem_ten(char name[]){
	struct sinhvien s;
	FILE*fp;
	fp=fopen("student.da","rb");
	if(fp==NULL){
		printf("khong tim thay file mo\n");
		return;
	}
	bool found =false;
	while(fread(&s,sizeof(struct sinhvien),1,fp)==1){
		if(strcmp(s.ten_hoc_sinh,name)==0){
			if(!found){
			printf("id\tten sinh vien\tten khoa hoc\thoc phi\tda tra hoc phi\tngay nhap hoc");
			found =true;
		}
			 printf("\n%d\t%s\t%s\t%f\t%f\t%s",s.id,s.ten_hoc_sinh,s.ten_khoa_hoc,s.hoc_phi,s.da_tra_hoc_phi,s.ngay_nhap_hoc);
		}
	}
	if(!found){
		printf("khong tim thay ho so sinh vien\n");
	}
	fclose(fp);
}
int main(){
	printf("nhap so luong sinh vien: ");
	int n;
	scanf("%d",&n);
	while(n--){
		nhap_hoc_sinh();
		system("cls");
	}
	while(1){
		printf("hay lua chon 1 trong 4 so duoi day\n");
		printf("1.danh sach sinh vien\n");
		printf("2.tim ho so sinh vien theo id cua sinh vien\n");
		printf("3.tim ho so sinh vien theo ten cua sinh vien\n");
		printf("4.thoat khoi file\n");
	
		printf("ban hay nhap so ma ban muon chon: ");
		int m;
		scanf("%d",&m);
		if(m==1){
		danh_sach_sinh_vien();	
		}
		else if(m==2){
			printf("\nnhap id: ");
			int id;
			scanf("%d",&id);
			tim_kiem_id(id);
		}
		else if(m==3){
			printf("\nnhap ten: ");
			getchar();
			char ten_hoc_sinh[50];
			fgets(ten_hoc_sinh,sizeof(ten_hoc_sinh),stdin);
			ten_hoc_sinh[strcspn(ten_hoc_sinh,"\n")]=0;
			tim_kiem_ten(ten_hoc_sinh);
		}
		else if(m==4){
			remove("student.da");
			return 0;
		}
		else{
			printf("ban nhap so khong hop le  vui long nhap lai\n ");
		}
		getchar();
		printf("\nhay nhan enter de xoa het ta ca du lieu co trong man hinh\n");
		char c;
		scanf("%c",&c);
		if(c=='\n'){
			system("cls");
		}
	}
}

