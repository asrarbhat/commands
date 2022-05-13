import random

from numpy import number

class Encryptron:
    def __init__(self):
        pass

    def encrypt(self, binary_data,sizer):
        system1, system2= self.__generate_key()
        return [self.__convert(binary_data, system1, system2,sizer), bytes(system1+system2)]

    def decrypt(self, binary_data, key):
        systems=[int(x) for x in key]
        if len(systems)<300:
            print("invalid key!!!")
            exit(0)
        system2, system1 = systems[:256],systems[256:]
        return self.__convert_back(binary_data, system1, system2)
    def __convert_back(self, binary_data, system1, system2):
        try:
            base1=len(system1)
            base2=len(system2)
            first_system={system1[i]:i for i in range(base1)}
            second_system={i:system2[i] for i in range(base2)}
            powers_of_255=[1, 255, 65025, 16581375, 4228250625, 1078203909375, 274941996890625, 70110209207109375, 17878103347812890625, 4558916353692287109375, 1162523670191533212890625, 296443535898840969287109375, 75593101654204447168212890625, 19276240921822134027894287109375, 4915441435064644177113043212890625, 1253437565941484265163826019287109375, 319626579315078487616775634918212890625, 81504777725345014342277786904144287109375, 20783718319962978657280835660556793212890625, 5299848171590559557606613093441982269287109375, 1351461283755592687189686338827705478668212890625, 344622627357676135233370016401064897060394287109375, 87878769976207414484509354182271548750400543212890625, 22409086343932890693549885316479244931352138519287109375, 5714317017702887126855220755702207457494795322418212890625, 1457150839514236217348081292704062901661172807216644287109375, 371573464076130235423760729639536039923599065840244293212890625, 94751233339413210033058986058081690180517761789262294769287109375, 24161564501550368558430041444810830996032029256261885166168212890625, 6161198947895343982399660568426761903988167460346780717372894287109375, 1571105731713312715511913444948824285516982702388429082930088043212890625, 400631961586894742455537928461950192806830589109049416147172451019287109375, 102161150204658159326162171757797299165741800222807601117528975009918212890625, 26051093302187830628171353798238311287264159056815938284969888627529144287109375, 6643028792057896810183695218550769378252360559488064262667321600019931793212890625, 1693972341974763686596842280730446191454351942669456386980167008005082607269287109375, 431962947203564740082194781586263778820859745380711378679942587041296064853668212890625, 110150551536909008720959669304497263599319235072081401563385359695530496537685394287109375, 28088390641911797223844715672646802217826404943380757398663266722360276617109775543212890625, 7162539613687508292080402496524934565545733260562093136659133014201870537362992763519287109375, 1826447601490314614480502636613858314214161981443333749848078918621476987027563154697418212890625, 465744138380030226692528172336533870124611305268050106211260124248476631692028604447841644287109375, 118764755286907707806594683945816136881775882843352777083871331683361541081467294134199619293212890625, 30285012598161465490681644406183114904852850125054958156387189579257192975774160004220902919769287109375, 7722678212531173700123819323576694300737476781889014329878733342710584208822410801076330244541168212890625, 1969282944195449293531573927512057046688056579381698654119077002391198973249714754274464212357997894287109375, 502167150769839569850551351515574546905454427742333156800364635609755738178677262339988374151289463043212890625, 128052623446309090311890594636471509460890879074294954984092982080487713235562701896697035408578813076019287109375, 32653418978808818029532101632300234912527174163945213520943710430524366875068488983657744029187597334384918212890625, 8326621839596248597530685916236559902694429411806029447840646159783713553142464690832724727442837320268154144287109375]


            output=[]
            data_length=len(binary_data)
            bucket=[]
            for i in range(data_length):
                if binary_data[i]!=base1:
                    bucket.append(binary_data[i])
                else:
                    number=0
                    for j in range(len(bucket)):
                        number+= (powers_of_255[j])*first_system[bucket[j]]
                    temp=[]
                    while(number!=0):
                        temp.append(second_system[number%base2])
                        number//=base2
                    l=len(temp)
                    for m in range(32-l):
                        temp.append(second_system[0])
                    output.extend(temp)
                    bucket=[]
            length=int("".join([str(x) for x in bucket]))
            output_length=len(output)
            for i in range(output_length-length):
                output.pop()
        except:
            print("invalid key!!")
            exit(1)
        return bytes(output)


    def __convert(self, binary_data, system1, system2,sizer):
        try:
            base1=len(system1)
            base2=len(system2)
            first_system={system1[i]:i for i in range(base1)}
            second_system={i:system2[i] for i in range(base2)}
            powers_of_256=[1, 256, 65536, 16777216, 4294967296, 1099511627776, 281474976710656, 72057594037927936, 18446744073709551616, 4722366482869645213696, 1208925819614629174706176, 309485009821345068724781056, 79228162514264337593543950336, 20282409603651670423947251286016, 5192296858534827628530496329220096, 1329227995784915872903807060280344576, 340282366920938463463374607431768211456, 87112285931760246646623899502532662132736, 22300745198530623141535718272648361505980416, 5708990770823839524233143877797980545530986496, 1461501637330902918203684832716283019655932542976, 374144419156711147060143317175368453031918731001856, 95780971304118053647396689196894323976171195136475136, 24519928653854221733733552434404946937899825954937634816, 6277101735386680763835789423207666416102355444464034512896, 1606938044258990275541962092341162602522202993782792835301376, 411376139330301510538742295639337626245683966408394965837152256, 105312291668557186697918027683670432318895095400549111254310977536, 26959946667150639794667015087019630673637144422540572481103610249216, 6901746346790563787434755862277025452451108972170386555162524223799296, 1766847064778384329583297500742918515827483896875618958121606201292619776, 452312848583266388373324160190187140051835877600158453279131187530910662656]

            output=[]
            encrypt_packet_size=sizer
            data_length=len(binary_data)
            for i in range(0,data_length,encrypt_packet_size):
                number=0
                for j in range(i,min(i+encrypt_packet_size,data_length)):
                    number+= (powers_of_256[j-i])*first_system[binary_data[j]]
                while(number!=0):
                    output.append(second_system[number%base2])
                    number//=base2
                output.append(base2)
            output.extend([int(x) for x in str(len(binary_data))])
        except:
            print("invalid key!!")
            print("hola")
            exit(1)
        return bytes(output)

    def __generate_key(self):
        alphabet_one=[i for i in range(256)]
        alphabet_two=[i for i in range(255)]
        return [random.sample(alphabet_one,len(alphabet_one)),random.sample(alphabet_two,len(alphabet_two))]

if __name__ == "__main__":
    from sys import argv
    argv = argv[1:]
    if (len(argv) > 3 or len(argv) < 2):
        print()
        print("[   invalid use of command   ]")
        print()
        print("HELP:")
        print()
        print(" for encryption: python3 encryptron.py -e filepath")
        print(" eg. python3 encryptron.py -e ./videos/abc.mp4")
        print()
        print(" for decryption: python3 encryptron.py -d filepath key_path")
        print(" eg. python3 encryptron.py -d ./videos/abc.mp4.encrypted abc.mp4.key")
        print()
        exit(0)
    cryptography = Encryptron()
    if ((argv[0] == "-e" or argv[0] == "-E") and len(argv)==2):
        try:
            input_file = open(argv[1].strip(), "rb")
            output_file = open(argv[1].strip()+".encrypted", "wb")
            key_file = open(argv[1].strip()+".key", "wb")

        except:
            print("coudn't find/open the file!!!")
            exit(1)
        f=input_file.read()
        data, key = cryptography.encrypt(f,32)
        try:
            output_file.write(data)
            key_file.write(key)

            output_file.close()
            key_file.close()
            input_file.close()
            print("success: encrypted file and key file created in the same folder")
        except:
            print("error during writing of files!!!")
            exit(0)

    elif ((argv[0] == "-d" or argv[0] == "-D") and len(argv)==3):
        try:
            input_file = open(argv[1].strip(), "rb")
            output_file = open(argv[1].strip().replace(
                ".encrypted", "").strip(), "wb")
            key = open(argv[2].strip(),"rb")

        except:
            print("coudn't find/open the file!!!")
            exit(1)
        f=input_file.read()
        data = cryptography.decrypt(f, key.read())
        try:
            output_file.write(data)
            output_file.close()
            input_file.close()
            key.close()
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
        print(" to encrypt: python3 encryptron.py -e filepath")
        print(" eg. python3 encryptron.py -e ./videos/abc.mp4")
        print()
        print(" to decrypt: python3 encryptron.py -d filepath key_file_path")
        print(" eg. python3 encryptron.py -d ./videos/abc.mp4.encrypted abc.mp4.key")
        print()
        exit(0)
