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

def font2img(uni: str, new_path: str):
    font_path = "D:/workspace/font_sslab/fonts/Myeongjo"
    fonts = os.listdir("D:/workspace/font_sslab/fonts/Myeongjo")

    path = 'D:/workspace/font_sslab/font_data/1176_Myeongjo/' + new_path
    os.makedirs(path, exist_ok=True)

    unicodeChars = chr(int(uni, 16))
    print(unicodeChars)

    w, h = (256, 256)

    for ttf in fonts:
        font = ImageFont.truetype(font=font_path+"/"+ttf, size=256)
        x, y = font.getsize(unicodeChars)
    
        theImage = Image.new('RGB', (256,256),color='white')
        theDrawPad = ImageDraw.Draw(theImage)
        theDrawPad.text(((w-x)/2, (h-y)/2), unicodeChars, font=font, fill='black')

        msg = path + "/" + ttf[:-4] + "uni"
        theImage.save('{}.png'.format(msg))

if __name__ == "__main__":
    typer.run(font2img)