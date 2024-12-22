db.hotel.insertMany([
  {
    hotel_id: 1,
    name: "The Bronx Inn",
    Borough: "Bronx",
    cuisine: "American",
    zip_code: "10453"
  },
  {
    hotel_id: 2,
    name: "Manhattan Delights",
    Borough: "Manhattan",
    cuisine: "Italian",
    zip_code: "10019"
  },
  {
    hotel_id: 3,
    name: "Brooklyn Bites",
    Borough: "Brooklyn",
    cuisine: "Chinese",
    zip_code: "11201"
  },
  {
    hotel_id: 4,
    name: "Queens Taste",
    Borough: "Queens",
    cuisine: "Mexican",
    zip_code: "11368"
  },
  {
    hotel_id: 5,
    name: "Staten Island Seafood",
    Borough: "Staten Island",
    cuisine: "Seafood",
    zip_code: "10301"
  },
  {
    hotel_id: 6,
    name: "Bronx Vegan Café",
    Borough: "Bronx",
    cuisine: "Vegan",
    zip_code: "10458"
  }
])


db.hotel.find()

db.hotel.find({}, { hotel_id: 1, name: 1, Borough: 1, cuisine: 1 })

db.hotel.find({}, { hotel_id: 1, name: 1, Borough: 1, cuisine: 1, _id: 0 })

db.hotel.find({}, { hotel_id: 1, name: 1, Borough: 1, zip_code: 1, _id: 0 })

db.hotel.find({ Borough: "Bronx" })
