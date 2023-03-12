class Mahasiswa : public SivitasAkademik
{
private:
    string nim;
    string fakultas;

public:
    Mahasiswa(string nim = "", string fakultas = "", string nik = "", string nama = "", string jenis_kelamin = "", string asal_universitas = "", string email_edu = "") : SivitasAkademik(nik, nama, jenis_kelamin, asal_universitas, email_edu)
    {
        this->nim = nim;
        this->fakultas = fakultas;
    }
    void set_nim(string nim)
    {
        this->nim = nim;
    }
    void set_fakultas(string fakultas)
    {
        this->fakultas = fakultas;
    }
    string get_nim()
    {
        return this->nim;
    }
    string get_fakultas()
    {
        return this->fakultas;
    }
};