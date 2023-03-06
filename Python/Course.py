class Course:
    __nama_matakuliah = ""
    __sks = ""
    __kode_mk = ""

    def __init__(self, nama_matakuliah="", sks="", kode_mk=""):
        self.__nama_matakuliah = ""
        self.__sks = ""
        self.__kode_mk = ""

    def set_nama_matakuliah(self, nama_matakuliah):
        self.__nama_matakuliah = nama_matakuliah

    def set_sks(self, sks):
        self.__sks = sks

    def set_kode_mk(self, kode_mk):
        self.__kode_mk = kode_mk

    def get_nama_matakuliah(self):
        return self.__nama_matakuliah

    def get_sks(self):
        return self.__sks

    def get_kode_mk(self):
        return self.__kode_mk
