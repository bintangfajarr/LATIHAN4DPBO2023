#include "header.hh"
Mahasiswa::Mahasiswa() : SivitasAkademik()
{
    this->nim = "";
    this->fakultas = "";
}
Mahasiswa::Mahasiswa(string nim, string fakultas, string nik, string nama, string jenis_kelamin, string asal_universitas, string email_edu) : SivitasAkademik(nik, nama, jenis_kelamin, asal_universitas, email_edu)
{
    this->nim = nim;
    this->fakultas = fakultas;
}
void Mahasiswa::set_nim(string nim)
{
    this->nim = nim;
}
void Mahasiswa::set_fakultas(string fakultas)
{
    this->fakultas = fakultas;
}
string Mahasiswa::get_nim()
{
    return this->nim;
}
string Mahasiswa::get_fakultas()
{
    return this->fakultas;
}
Mahasiswa::~Mahasiswa()
{
}