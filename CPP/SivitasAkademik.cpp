class SivitasAkademik : public Human
{
private:
    string asal_universitas;
    string email_edu;

public:
    SivitasAkademik(string nik = "", string nama = "", string jenis_kelamin = "", string asal_universitas = "", string email_edu = "") : Human(nik, nama, jenis_kelamin)
    {
        this->asal_universitas = asal_universitas;
        this->email_edu = email_edu;
    }
    void set_asal_universitas(string asal_universitas)
    {
        this->asal_universitas = asal_universitas;
    }
    void set_email_edu(string set_email_edu)
    {
        this->email_edu = email_edu;
    }
    string get_asal_universitas()
    {
        return this->asal_universitas;
    }
    string get_email_edu()
    {
        return this->email_edu;
    }
};
