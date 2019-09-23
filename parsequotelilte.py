from urllib.request import *
url = 'https://www.youtube.com/feed/trending'
page = urlopen(url)
page_bytes = page.read()
pagetxt = page_bytes.decode('UTF-8', 'backslashreplace')
text_file = open('index.html', 'w', encoding = 'UTF-8')
text_file.write(pagetxt)
text_file.close()