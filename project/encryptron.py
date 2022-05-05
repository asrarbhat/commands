import random


class Encryptron:
    def __init__(self):
        pass

    def encrypt(self, binary_data, key_size):
        key = self.__generate_key(key_size)
        system1, system2 = self.__system_generator(key)
        return [self.__convert(binary_data, system1, system2), key]

    def decrypt(self, binary_data, key):
        system2, system1 = self.__system_generator(key)
        return self.__convert(binary_data, system1, system2)

    def __system_generator(key):
        system1 = ""
        system2 = ""
        return [system1, system2]

    def __convert(self, binary_data, system1, system2):
        return "data"

    def __generate_key(self, key_size):
        key = "".join([str(random.randint(0, 1)) for i in range(key_size)])
        return key


if __name__ == "__main__":
    from sys import argv
    argv = argv[1:]
    if (len(argv) != 3):
        print()
        print("[   invalid use of command   ]")
        print()
        print("HELP:")
        print()
        print(" for encryption: python3 encryptron.py -e filepath key_size_in_bits")
        print(" eg. python3 encryptron.py -e ./videos/abc.mp4 256")
        print()
        print(" for decryption: python3 encryptron.py -d filepath key")
        print(" eg. python3 encryptron.py -d ./videos/abc.mp4.encrypted 8749836483643664364368364")
        print()
        exit(0)
    cryptography = Encryptron()
    if ((argv[0] == "-e" or argv[0] == "-E")):
        try:
            input_file = open(argv[1].strip(), "rb")
            output_file = open(argv[1].strip()+".encrypted", "wb")

        except:
            print("coudn't find/open the file!!!")
            exit(1)
        try:
            key_size = int(argv[2])
        except:
            print("key size not given as integer")
            exit(1)
        data, key = cryptography.encrypt(input_file.read(), key_size)
        try:
            output_file.write(data)
            output_file.close()
            input_file.close()
            print("success: file created in same folder")
            print("key:", key)
        except:
            print("error during writing of files!!!")
            exit(0)

    elif ((argv[0] == "-d" or argv[0] == "-D")):
        try:
            input_file = open(argv[1].strip(), "rb")
            output_file = open(argv[1].strip().replace(
                ".encrypted", "").strip(), "wb")

        except:
            print("coudn't find/open the file!!!")
            exit(1)
        key = argv[2].strip()
        data = cryptography.decrypt(input_file.read(), key)
        try:
            output_file.write(data)
            output_file.close()
            input_file.close()
            print("success: file created in same folder")
        except:
            print("error during writing of files!!!")
            exit(0)
    else:
        print()
        print("[   invalid use of command   ]")
        print()
        print("HELP:")
        print()
        print(" to encrypt: python3 encryptron.py -e filepath key_size_in_bits")
        print(" eg. python3 encryptron.py -e ./videos/abc.mp4 256")
        print()
        print(" to decrypt: python3 encryptron.py -d filepath key")
        print(" eg. python3 encryptron.py -d ./videos/abc.mp4.encrypted 8749836483643664364368364")
        print()
        exit(0)
