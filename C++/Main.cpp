#include "header.hh"
int main()
{
    Course crs1("Alpro", "3", "IK100");
    Course crs2("Strukdat", "3", "IK101");
    Course crs3("DPBO", "3", "IK102");
    Mahasiswa mhs1("2102665", "FPMIPA", "32133001201313",
                   "Bintang Fajar", "L", "UPI", "bintangfajar@upi.edu");
    Dosen dsn1("19293733", "S2", "AI",
               "3213300032", "Yaya Wihardi", "L", "UPI", "yaya@upi.edu");
    ProgramStudi prodi1("Ilmu Komputer", "IK");
    prodi1.add_course(crs1);
    prodi1.add_course(crs2);
    prodi1.add_course(crs3);
    prodi1.add_dosen(dsn1);
    prodi1.add_mahasiswa(mhs1);
    ProgramStudi prodi2("Pendidikan Ilmu Komputer", "PIK");
    Course crs4("Alpro", "3", "PIK100");
    Course crs5("Strukdat", "3", "PIK101");
    Course crs6("DPBO", "3", "PIK102");
    Mahasiswa mhs2("2102666", "FPMIPA", "321300494940",
                   "Muhammad Nur Yasin", "L", "UPI", "mnyasin@upi.edu");
    Dosen dsn2("19293732", "S2", "algoritma",
               "3213302131", "Rosa Ariani S", "P", "UPI", "rosa@upi.edu");
    prodi2.add_course(crs4);
    prodi2.add_course(crs5);
    prodi2.add_course(crs6);
    prodi2.add_dosen(dsn2);
    prodi2.add_mahasiswa(mhs2);
    vector<ProgramStudi>
        listprodi = {prodi1, prodi2};

    for (ProgramStudi i : listprodi)
    {
        cout << "Program Studi " << i.get_nama_prodi() << endl;
        cout << "Kode Prodi " << i.get_kode_prodi() << endl;
        cout << "<List Dosen>" << endl;
        for (Dosen j : i.get_dosen())
        {
            cout << "Nama : " << j.get_nama() << endl;
            cout << "NIK : " << j.get_nik() << endl;
            cout << "NIP : " << j.get_nip() << endl;
            cout << "Jenis Kelamin : " << j.get_jenis_kelamin() << endl;
            cout << "Keahlian : " << j.get_keahlian() << endl;
            cout << "Pendidikan Terakhir : " << j.get_pend_terakhir() << endl;
            cout << "Asal Universitas : " << j.get_asal_universitas() << endl;
            cout << "Email Edu : " << j.get_email_edu() << endl;
        }
        cout << endl;
        cout << "<List Mahasiswa>" << endl;
        for (Mahasiswa j : i.get_mahasiswa())
        {
            cout << "Nama : " << j.get_nama() << endl;
            cout << "NIK : " << j.get_nik() << endl;
            cout << "NIM : " << j.get_nim() << endl;
            cout << "Jenis Kelamin : " << j.get_jenis_kelamin() << endl;
            cout << "Fakultas : " << j.get_fakultas() << endl;
            cout << "Asal Universitas : " << j.get_asal_universitas() << endl;
            cout << "Email Edu : " << j.get_email_edu() << endl;
        }
        cout << endl;
        cout << "<List Mata Kuliah>" << endl;
        for (Course j : i.get_course())
        {
            cout << "Nama MK : " << j.get_nama_matakuliah() << endl;
            cout << "Kode MK : " << j.get_kode_mk() << endl;
            cout << "SKS : " << j.get_sks() << endl;
        }
        cout << endl;
    }
}