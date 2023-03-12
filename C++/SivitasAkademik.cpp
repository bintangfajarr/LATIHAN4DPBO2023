#include "header.hh"

SivitasAkademik::SivitasAkademik() : Human()
{
    this->asal_universitas = "";
    this->email_edu = "";
}
SivitasAkademik::SivitasAkademik(string asal_universitas, string email_edu, string nik, string nama, string jenis_kelamin) : Human(nik, nama, jenis_kelamin)
{
    this->asal_universitas = asal_universitas;
    this->email_edu = email_edu;
}
void SivitasAkademik::set_asal_universitas(string asal_universitas)
{
    this->asal_universitas = asal_universitas;
}
void SivitasAkademik::set_email_edu(string set_email_edu)
{
    this->email_edu = email_edu;
}
string SivitasAkademik::get_asal_universitas()
{
    return this->asal_universitas;
}
string SivitasAkademik::get_email_edu()
{
    return this->email_edu;
}
SivitasAkademik::~SivitasAkademik()
{
}