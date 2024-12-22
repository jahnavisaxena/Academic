db.hotel.insertMany([
  { hotel_id: 1, name: "The Bronx Inn", Borough: "Bronx", cuisine: "Italian", grades: 85, location: { latitude: -96.5, longitude: 40.5 } },
  { hotel_id: 2, name: "Bronx Vegan Café", Borough: "Bronx", cuisine: "Vegan", grades: 92, location: { latitude: -94.3, longitude: 41.0 } },
  { hotel_id: 3, name: "Bronx Steakhouse", Borough: "Bronx", cuisine: "American", grades: 78, location: { latitude: -97.0, longitude: 39.8 } },
  { hotel_id: 4, name: "Queens Taste", Borough: "Queens", cuisine: "Mexican", grades: 88, location: { latitude: -65.8, longitude: 42.0 } },
  { hotel_id: 5, name: "Manhattan Delights", Borough: "Manhattan", cuisine: "Chinese", grades: 95, location: { latitude: -94.1, longitude: 40.3 } },
  { hotel_id: 6, name: "Bronx Grill House", Borough: "Bronx", cuisine: "BBQ", grades: 82, location: { latitude: -95.6, longitude: 41.2 } },
  { hotel_id: 7, name: "Staten Island Seafood", Borough: "Staten Island", cuisine: "Seafood", grades: 73, location: { latitude: -65.5, longitude: 39.9 } },
  { hotel_id: 8, name: "Brooklyn Bites", Borough: "Brooklyn", cuisine: "American", grades: 89, location: { latitude: -95.8, longitude: 41.1 } },
  { hotel_id: 9, name: "Bronx Café", Borough: "Bronx", cuisine: "Mexican", grades: 84, location: { latitude: -97.2, longitude: 40.0 } },
  { hotel_id: 10, name: "The Bronx Delight", Borough: "Bronx", cuisine: "Italian", grades: 87, location: { latitude: -96.2, longitude: 40.8 } }
]);

db.hotel.find({ Borough: "Bronx" }).skip(5).limit(5)

db.hotel.find({ grades: { $gt: 80, $lt: 100 } })

db.hotel.find({ "location.latitude": { $lt: -95.75 } })

db.hotel.find({
  cuisine: { $ne: "American" },
  grades: { $gt: 70 },
  "location.latitude": { $lt: -65.754168 }
})
