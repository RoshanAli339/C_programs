from datetime import datetime
import calendar
import subprocess
import sys

def run_command(command: str):
    print(command)
    process = subprocess.Popen(command.split(), stdout=subprocess.PIPE)
    print(str(process.args))
    if command.startswith("git push"):
        output, error = process.communicate()
    else:
        output, error = process.communicate()
    try:
        output = bytes(output).decode()
        error = bytes(error).decode()
        if not output:
            print("output: " + output)
        print("error: " + error)
    except TypeError:
        print()


def main():
    add = '.'
    branch = 'main'
    commit = datetime.now().strftime('%A %d %B %Y %H:%M:%S') 
    print("add: '" + add + "' commit: '" + commit + "' branch: '" + branch + "'")

    command = "git add " + add
    run_command(command)

    commit = commit.replace(" ", "''")
    command = 'git commit -m "' + commit + '"'
    run_command(command)

    command = "git push origin " + branch
    run_command(command)


if __name__ == '__main__':
    main()
