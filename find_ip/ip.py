import urllib.request
import re


print("We will try to open this URL, in order to get your IP address")
url = "http://checkip.dyndns.org/"
print(url)
with urllib.request.urlopen(url) as url:
    s = url.read().decode("utf-8")
    theIP = re.findall("\d+", s)
    print("Your IP is:", '.'.join(theIP))

