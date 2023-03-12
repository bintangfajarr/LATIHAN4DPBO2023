#include "header.hh"
Course::Course()
{
    this->nama_matakuliah = "";
    this->sks = "";
    this->kode_mk = "";
}
Course::Course(string nama_matakuliah, string sks, string kode_mk)
{
    this->nama_matakuliah = nama_matakuliah;
    this->sks = sks;
    this->kode_mk = kode_mk;
}
void Course::set_nama_matakuliah(string nama_matakuliah)
{
    this->nama_matakuliah = nama_matakuliah;
}
void Course::set_sks(string sks)
{
    this->sks = sks;
}
void Course::set_kode_mk(string kode_mk)
{
    this->kode_mk = kode_mk;
}
string Course::get_nama_matakuliah()
{
    return this->nama_matakuliah;
}
string Course::get_sks()
{
    return this->sks;
}
string Course::get_kode_mk()
{
    return this->kode_mk;
}
Course::~Course()
{
}