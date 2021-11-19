#include <iostream>
using namespace std;

int main()
{
	int nilai_matkul,matkul;
	char nama[30],nim[30],prodi[30],nama_matkul[30],grade[30]="Grade Nilai Mata Kuliah";
	char *Tmatkul,*Tgrade,*Tnama,*Tnim,*Tprodi;
	Tmatkul=nama_matkul;
	Tgrade=grade;
	Tnama=nama;
	Tnim=nim;
	Tprodi=prodi;
	string grd;
	
	cout<<"============================================================"<<endl;
	cout<<"|     Progam Menentukan Keterangan Nilai Mata Kuliah       |"<<endl;
	cout<<"============================================================"<<endl;
	cout<<"\n";
	
	cout<<"| Nama                    : "; cin.getline (Tnama,30);
	cout<<"| NIM                     : "; cin.getline (Tnim,30);
	cout<<"| Progam Studi            : "; cin.getline (Tprodi,30);
	cout<<"| Jumlah Data Mata Kuliah : "; cin>>matkul;
	
	cout<<"------------------------------------------------------------"<<endl;
	cout<<"\n";
	
	for (int i=1;i<=matkul;i++)
	{
		cout<<"              Data Mata Kuliah ke-"<<i<<"                   "<<endl;
		cout<<"============================================================"<<endl;
		cout<<"| Nama Mata Kuliah  : "; cin>>Tmatkul;
		cout<<"| Nilai Mata Kuliah : "; cin>>nilai_matkul;
		
		if ((nilai_matkul>=90)&&(nilai_matkul<=100))
		{
			grd="A";
		}
		else if ((nilai_matkul>=80)&&(nilai_matkul<90))
		{
			grd="B";
		}
		else if ((nilai_matkul>=70)&&(nilai_matkul<80))
		{
			grd="C";
		}
		else if ((nilai_matkul>=60)&&(nilai_matkul<70))
		{
			grd="D";
		}
		else if ((nilai_matkul>=50)&&(nilai_matkul<60))
		{
			grd="E";
		}
		else
		{
			grd="Tidak Lulus";
		}
		cout<<"| "<<Tgrade<<"    : "<<grd<<endl;
		cout<<"============================================================"<<endl;
		cout<<"\n";
	}
	
return 0;	
}
