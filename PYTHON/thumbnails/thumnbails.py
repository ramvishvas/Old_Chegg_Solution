# Note open image you need to install PIL or Pillow
import os, sys
from PIL import Image

sizes = 128, 128

# for will run only if we provide command line argument
# in this case argument if image(.jpeg) file name
for fl in sys.argv[1:]:
	# it will create new file with same name .thumbnail extention
	fl1 = os.path.splitext(fl)[0] + ".thumbnail"
	# chek if its allready a thumbnail 
	if fl != fl1:
		try:
			# this will create a new thumbnail file
			images = Image.open(fl)
			images.thumbnail(sizes)
			images.save(fl1, "JPEG")
			# print("created sucessfully")
		except IOError:
			# if IOError Occure
			print("cannot create thumbnail for", fl)