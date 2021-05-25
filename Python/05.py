import requests
from bs4 import BeautifulSoup
import pandas

URL = 'https://www.goibibo.com/hotels/intl-hotels-in-maldives-ct/'
r = requests.get(URL)
soup = BeautifulSoup(r.content, 'html.parser')

all_hotels=soup.find_all("div",{"class":"HotelCardstyles__WrapperSectionMetaDiv-sc-1s80tyk-2 izCyfU"})
scraped_info_list = []

for hotel in all_hotels:
    hotel_dict = dict()
    hotel_dict["Name"]=hotel.find("a").text
    hotel_dict["Address"]=hotel.find("div", {"class":"PersuasionHoverTextstyles__TextWrapperSpan-sc-1c06rw1-14 dlEtqh"}).text
    hotel_dict["Price"]=hotel.find("span", {"itemprop": "priceRange"}).text
    scraped_info_list.append(hotel_dict)

dataframe = pandas.DataFrame(scraped_info_list)
dataframe.to_csv("goibibo.csv")
