
class Human
{
private:
    string nik;
    string nama;
    string jenis_kelamin;

public:
    Human(string nik = "", string nama = "", string jenis_kelamin = "")
    {
        this->nik = nik;
        this->nama = nama;
        this->jenis_kelamin = jenis_kelamin;
    }
    void set_nik(string nik)
    {
        this->nik = nik;
    }
    void set_nama(string nama)
    {
        this->nama = nama;
    }
    void set_jenis_kelamin(string jenis_kelamin)
    {
        this->jenis_kelamin = jenis_kelamin;
    }
    string get_nik()
    {
        return this->nik;
    }
    string get_nama()
    {
        return this->nama;
    }
    string get_jenis_kelamin()
    {
        return this->jenis_kelamin;
    }
};
