#include <bits/stdc++.h>
using namespace std;

class Human
{
private:
    string nik;
    string nama;
    string jenis_kelamin;

public:
    Human();
    Human(string nik, string nama, string jenis_kelamin);

    void set_nik(string nik);
    void set_nama(string nama);
    void set_jenis_kelamin(string jenis_kelamin);

    string get_nik();
    string get_nama();
    string get_jenis_kelamin();
    ~Human();
};

class SivitasAkademik : public Human
{
private:
    string asal_universitas;
    string email_edu;

public:
    SivitasAkademik();
    SivitasAkademik(string asal_universitas, string email_edu, string nik, string nama, string jenis_kelamin);

    void set_asal_universitas(string asal_universitas);
    void set_email_edu(string set_email_edu);

    string get_asal_universitas();
    string get_email_edu();
    ~SivitasAkademik();
};

class Mahasiswa : public SivitasAkademik
{
private:
    string nim;
    string fakultas;

public:
    Mahasiswa();
    Mahasiswa(string nim, string fakultas, string nik, string nama, string jenis_kelamin, string asal_universitas, string email_edu);

    void set_nim(string nim);
    void set_fakultas(string fakultas);

    string get_nim();
    string get_fakultas();

    ~Mahasiswa();
};

class Dosen : public SivitasAkademik
{
private:
    string nip;
    string pend_terakhir;
    string keahlian;

public:
    Dosen();
    Dosen(string nip, string pend_terakhir, string keahlian, string nik, string nama, string jenis_kelamin, string asal_universitas, string email_edu);

    void set_nip(string nip);
    void set_pend_terakhir(string pend_terakhir);
    void set_keahlian(string keahlian);

    string get_nip();
    string get_pend_terakhir();
    string get_keahlian();
    ~Dosen();
};

class Course
{
private:
    string nama_matakuliah;
    string sks;
    string kode_mk;

public:
    Course();
    Course(string nama_matakuliah, string sks, string kode_mk);
    void set_nama_matakuliah(string nama_matakuliah);
    void set_sks(string sks);
    void set_kode_mk(string kode_mk);

    string get_nama_matakuliah();
    string get_sks();
    string get_kode_mk();
    ~Course();
};

class ProgramStudi
{
private:
    string nama_prodi;
    string kode_prodi;
    vector<Mahasiswa> mahasiswa;
    vector<Dosen> dosen;
    vector<Course> course;

public:
    ProgramStudi();
    ProgramStudi(string nama_prodi, string kode_prodi);

    void set_nama_prodi(string nama_prodi);
    void set_kode_prodi(string kode_prodi);
    void set_mahasiswa(vector<Mahasiswa> mahasiswa);
    void set_dosen(vector<Dosen> dosen);
    void set_course(vector<Course> course);

    string get_nama_prodi();
    string get_kode_prodi();
    vector<Mahasiswa> get_mahasiswa();
    vector<Dosen> get_dosen();
    vector<Course> get_course();

    void add_course(Course course);
    void add_mahasiswa(Mahasiswa mahasiswa);
    void add_dosen(Dosen dosen);

    ~ProgramStudi();
};