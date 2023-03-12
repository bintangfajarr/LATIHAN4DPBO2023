#include "header.hh"
ProgramStudi::ProgramStudi()
{
    this->nama_prodi = "";
    this->kode_prodi = "";
    this->mahasiswa = {};
    this->dosen = {};
    this->course = {};
}
ProgramStudi::ProgramStudi(string nama_prodi, string kode_prodi)
{
    this->nama_prodi = nama_prodi;
    this->kode_prodi = kode_prodi;
    this->mahasiswa = mahasiswa;
    this->dosen = dosen;
    this->course = course;
}
void ProgramStudi::set_nama_prodi(string nama_prodi)
{
    this->nama_prodi = nama_prodi;
}
void ProgramStudi::set_kode_prodi(string kode_prodi)
{
    this->kode_prodi = kode_prodi;
}
void ProgramStudi::set_mahasiswa(vector<Mahasiswa> mahasiswa)
{
    this->mahasiswa = mahasiswa;
}
void ProgramStudi::set_dosen(vector<Dosen> dosen)
{
    this->dosen = dosen;
}
void ProgramStudi::set_course(vector<Course> course)
{
    this->course = course;
}
string ProgramStudi::get_nama_prodi()
{
    return this->nama_prodi;
}
string ProgramStudi::get_kode_prodi()
{
    return this->kode_prodi;
}
vector<Mahasiswa> ProgramStudi::get_mahasiswa()
{
    return this->mahasiswa;
}
vector<Dosen> ProgramStudi::get_dosen()
{
    return this->dosen;
}
vector<Course> ProgramStudi::get_course()
{
    return this->course;
}
void ProgramStudi::add_course(Course course)
{
    this->course.push_back(course);
}
void ProgramStudi::add_mahasiswa(Mahasiswa mahasiswa)
{
    this->mahasiswa.push_back(mahasiswa);
}
void ProgramStudi::add_dosen(Dosen dosen)
{
    this->dosen.push_back(dosen);
}
ProgramStudi::~ProgramStudi()
{
}