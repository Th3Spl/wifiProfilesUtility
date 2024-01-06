import os 

def main():
    os.system("netsh wlan export profile key=clear")


if __name__ == "__main__":
    main()