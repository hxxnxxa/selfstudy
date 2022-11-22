import sys
import os
import numpy as np
import matplotlib.pyplot as plt
from PIL import Image, ImageFont, ImageDraw
from numpy.core.arrayprint import TimedeltaFormat
from tqdm import tqdm
import IPython.display as display
from matplotlib import font_manager
import typer

# example : python font2img_3.py 12_Noto_Sans_KR/NotoSansKR-Black AD81 NotoSansKR-Black

def font2img(ttf_path:str, uni: str, new_path: str):
    font_path = otf_path
    tgt_path  = new_path
    os.makedirs(tgt_path, exist_ok=True)

    unicodeChars = chr(int(uni, 16))
    print(unicodeChars)

    w, h = (256, 256)

    font = ImageFont.truetype(font_path+".otf", size=200)
    x, y = font.getsize(chr(int(uni, 16)))
    print("x:",x)
    print("y:",y)

    theImage = Image.new('RGB', (256,256),color='white')
    theDrawPad = ImageDraw.Draw(theImage)

    theDrawPad.text(((w-x)/2,-20), unicodeChars, font=font, fill='black')

    msg = tgt_path + "/" + new_path + "_" + uni + "_origin"
    print(msg)
    theImage.save('{}.png'.format(msg))

if __name__ == "__main__":
    typer.run(font2img)