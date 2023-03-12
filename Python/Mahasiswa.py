from SivitasAkademik import SivitasAkademik


class Mahasiswa(SivitasAkademik):
    __nim = ""
    __fakultas = ""

    def __init__(self, nim="", fakultas="", nik="", nama="", jenis_kelamin="", asal_universitas="", email_edu=""):
        super().__init__(nik, nama, jenis_kelamin, asal_universitas, email_edu)
        self.__nim = nim
        self.__fakultas = fakultas

    def set_nim(self, nim):
        self.__nim = nim

    def set_fakultas(self, fakultas):
        self.__fakultas = fakultas

    def get_nim(self):
        return self.__nim

    def get_fakultas(self):
        return self.__fakultas
