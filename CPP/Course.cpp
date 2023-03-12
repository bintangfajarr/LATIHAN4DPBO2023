
class Course
{
private:
    string nama_matakuliah;
    string sks;
    string kode_mk;

public:
    Course()
    {
        this->nama_matakuliah = "";
        this->sks = "";
        this->kode_mk = "";
    }
    Course(string nama_matakuliah, string sks, string kode_mk)
    {
        this->nama_matakuliah = nama_matakuliah;
        this->sks = sks;
        this->kode_mk = kode_mk;
    }
    void set_nama_matakuliah(string nama_matakuliah)
    {
        this->nama_matakuliah = nama_matakuliah;
    }
    void set_sks(string sks)
    {
        this->sks = sks;
    }
    void set_kode_mk(string kode_mk)
    {
        this->kode_mk = kode_mk;
    }
    string get_nama_matakuliah()
    {
        return this->nama_matakuliah;
    }
    string get_sks()
    {
        return this->sks;
    }
    string get_kode_mk()
    {
        return this->kode_mk;
    }
    ~Course() {}
};