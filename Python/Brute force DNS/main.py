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

#!/bin/bash
import dns.resolver
import sys

try:
        domain = sys.argv[1]
        file_name = sys.argv[2]
except:
        print("Invalid argument!")
        print("Usage: python3 dns_bf.py <DOMAIN> <WORD-LIST>")
        sys.exit(1)

try:
        file = open(file_name)
        subdomains = file.read().splitlines()
except:
        print("File not found")
        sys.exit()

for subdomain in subdomains:
        try:
                domsub = subdomain + '.' + domain
                results = dns.resolver.query(domsub, 'a')
                for result in results:
                        print(domsub, result)
        except:
                pass