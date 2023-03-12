#include "header.hh"
Dosen::Dosen() : SivitasAkademik()
{
    this->nip = "";
    this->pend_terakhir = "";
    this->keahlian = "";
}
Dosen::Dosen(string nip, string pend_terakhir, string keahlian, string nik, string nama, string jenis_kelamin, string asal_universitas, string email_edu) : SivitasAkademik(nik, nama, jenis_kelamin, asal_universitas, email_edu)
{
    this->nip = nip;
    this->pend_terakhir = pend_terakhir;
    this->keahlian = keahlian;
}
void Dosen::set_nip(string nip)
{
    this->nip = nip;
}
void Dosen::set_pend_terakhir(string pend_terakhir)
{
    this->pend_terakhir = pend_terakhir;
}
void Dosen::set_keahlian(string keahlian)
{
    this->keahlian = keahlian;
}
string Dosen::get_nip()
{
    return this->nip;
}
string Dosen::get_pend_terakhir()
{
    return this->pend_terakhir;
}
string Dosen::get_keahlian()
{
    return this->keahlian;
}
Dosen::~Dosen()
{
}