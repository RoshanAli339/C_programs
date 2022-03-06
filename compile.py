import os
import sys

command = 'gcc '+sys.argv[1]+'.c '+' -o output/'+sys.argv[1]+' -lm'
os.system(command)

