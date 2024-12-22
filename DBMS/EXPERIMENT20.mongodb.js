db.hotel.insertMany([
  {
    hotel_id: 1,
    name: "The Modern Grill",
    address: { street: "Broadway", zipcode: "10025" },
    Borough: "Manhattan",
    cuisine: "American",
    grades: 84,
    coord: 40.7812
  },
  {
    hotel_id: 2,
    name: "Mondays Bistro",
    address: { street: "Main Street", zipcode: "10453" },
    Borough: "Bronx",
    cuisine: "French",
    grades: 49,
    coord: 40.8500
  },
  {
    hotel_id: 3,
    name: "Magic Spoon",
    address: { street: "Fifth Avenue", zipcode: "10029" },
    Borough: "Manhattan",
    cuisine: "Italian",
    grades: 91,
    coord: 40.7901
  },
  {
    hotel_id: 4,
    name: "Madeline's Diner",
    address: { street: "Second Avenue", zipcode: "10003" },
    Borough: "Brooklyn",
    cuisine: "Mexican",
    grades: 70,
    coord: -65.7591
  },
  {
    hotel_id: 5,
    name: "Sunset Delights",
    address: { street: "Ocean Parkway", zipcode: "11235" },
    Borough: "Brooklyn",
    cuisine: "Seafood",
    grades: 98,
    coord: 40.5931
  },
  {
    hotel_id: 6,
    name: "Mad Max BBQ",
    address: { street: "Park Avenue", zipcode: "10022" },
    Borough: "Queens",
    cuisine: "BBQ",
    grades: 56,
    coord: -65.7600
  },
  {
    hotel_id: 7,
    name: "Harmony House",
    address: { zipcode: "11201" },
    Borough: "Queens",
    cuisine: "Chinese",
    grades: 77,
    coord: 40.6922
  },
  {
    hotel_id: 8,
    name: "Brooklyn Magic",
    address: { street: "Flatbush Avenue", zipcode: "11226" },
    Borough: "Brooklyn",
    cuisine: "Caribbean",
    grades: 81,
    coord: 40.6441
  },
  {
    hotel_id: 9,
    name: "Monarch Lounge",
    address: { street: "Kings Highway", zipcode: "11234" },
    Borough: "Brooklyn",
    cuisine: "Italian",
    grades: 70,
    coord: 40.6200
  },
  {
    hotel_id: 10,
    name: "Morning Star Café",
    address: { street: "Third Avenue", zipcode: "10467" },
    Borough: "Bronx",
    cuisine: "Vegan",
    grades: 85,
    coord: 40.8732
  }
]);

db.hotel.find({}, { cuisine: 1, Borough: 1, name: 1 }).sort({ cuisine: 1, Borough: -1 })

db.hotel.find({ "address.street": { $exists: true } }).count()

db.hotel.countDocuments()

db.hotel.find({ "coord": { $type: "double" } })

db.hotel.find({ grades: { $mod: [7, 0] } }, { hotel_id: 1, name: 1, grades: 1 })

db.hotel.find(
  { name: { $regex: "mon", $options: "i" } },
  { name: 1, Borough: 1, "location.longitude": 1, "location.latitude": 1, cuisine: 1 }
)

db.hotel.find(
  { name: { $regex: "^Mad", $options: "i" } },
  { name: 1, Borough: 1, "location.longitude": 1, "location.latitude": 1, cuisine: 1 }
)
