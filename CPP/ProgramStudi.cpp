
class ProgramStudi
{
private:
    string nama_prodi;
    string kode_prodi;
    vector<Mahasiswa> mahasiswa;
    vector<Dosen> dosen;
    vector<Course> course;

public:
    ProgramStudi()
    {
        this->nama_prodi = nama_prodi;
        this->kode_prodi = kode_prodi;
        this->mahasiswa = {};
        this->dosen = {};
        this->course = {};
    }
    ProgramStudi(string nama_prodi, string kode_prodi, Mahasiswa mahasiswa, Dosen dosen, Course course)
    {
        this->nama_prodi = nama_prodi;
        this->kode_prodi = kode_prodi;
        this->mahasiswa.push_back(mahasiswa);
        this->dosen.push_back(dosen);
        this->course.push_back(course);
    }
    void set_nama_prodi(string nama_prodi)
    {
        this->nama_prodi = nama_prodi;
    }
    void set_kode_prodi(string kode_prodi)
    {
        this->kode_prodi = kode_prodi;
    }
    void set_mahasiswa(vector<Mahasiswa> mahasiswa)
    {
        this->mahasiswa = mahasiswa;
    }
    void set_dosen(vector<Dosen> dosen)
    {
        this->dosen = dosen;
    }
    void set_course(vector<Course> course)
    {
        this->course = course;
    }
    string get_nama_prodi()
    {
        return this->nama_prodi;
    }
    string get_kode_prodi()
    {
        return this->kode_prodi;
    }
    vector<Mahasiswa> get_mahasiswa()
    {
        return this->mahasiswa;
    }
    vector<Dosen> get_dosen()
    {
        return this->dosen;
    }
    vector<Course> get_course()
    {
        return this->course;
    }
    void add_course(Course course)
    {
        this->course.push_back(course);
    }
    void add_mahasiswa(Mahasiswa mahasiswa)
    {
        this->mahasiswa.push_back(mahasiswa);
    }
    void add_dosen(Dosen dosen)
    {
        this->dosen.push_back(dosen);
    }
    ~ProgramStudi(){

    };
};
