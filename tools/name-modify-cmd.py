import os
import glob
import typer

def modify(tgt_path: str, ori: str, new: str):
    data_path = tgt_path
    files_list = glob.glob(data_path + '/*')

    for f in files_list:
        new_f = f.replace(ori,new)

        os.rename(f, new_f)
        print('{} --> {}'.format(f, new_f))

if __name__ == "__main__":
    typer.run(modify)