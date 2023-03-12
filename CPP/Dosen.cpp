class Dosen : public SivitasAkademik
{
private:
    string nip;
    string pend_terakhir;
    string keahlian;

public:
    Dosen(string nip = "", string pend_terakhir = "", string keahlian = "", string nik = "", string nama = "", string jenis_kelamin = "", string asal_universitas = "", string email_edu = "") : SivitasAkademik(nik, nama, jenis_kelamin, asal_universitas, email_edu)
    {
        this->nip = nip;
        this->pend_terakhir = pend_terakhir;
        this->keahlian = keahlian;
    }
    void set_nip(string nip)
    {
        this->nip = nip;
    }
    void set_pend_terakhir(string pend_terakhir)
    {
        this->pend_terakhir = pend_terakhir;
    }
    void set_keahlian(string keahlian)
    {
        this->keahlian = keahlian;
    }
    string get_nip()
    {
        return this->nip;
    }
    string get_pend_terakhir()
    {
        return this->pend_terakhir;
    }
    string get_keahlian()
    {
        return this->keahlian;
    }
};
