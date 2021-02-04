#MIT License
#
#Copyright (c) 2021 Eric Henrique
#
#Permission is hereby granted, free of charge, to any person obtaining a copy
#of this software and associated documentation files (the "Software"), to deal
#in the Software without restriction, including without limitation the rights
#to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
#copies of the Software, and to permit persons to whom the Software is
#furnished to do so, subject to the following conditions:
#
#The above copyright notice and this permission notice shall be included in all
#copies or substantial portions of the Software.
#
#THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
#IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
#FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
#AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
#LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
#OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
#SOFTWARE.

#=================================== Main =======================================#

import socket
import sys

ip = input("Type the IP: ")

# Wordlist port
try:
        pf = sys.argv[1]
        port_file = open(pf)
        ports_a = port_file.read().splitlines()
        ports = list(ports_a)

        print("Testing the ports...")

# Testing
 
        for port in ports:
                client = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
                client.settimeout(0.02)
                code = client.connect_ex((ip, int(port)))

                if code == 0:
                        print(str(port) + " => Open port")
                else:
                        pass

        print("Scanning finished.")

# Print error

except:

        print("[ERROR] File not found!")
        print("Usage: main.py <Ports file.txt>")