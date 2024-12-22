db.createCollection('hotels')

db.hotels.insertMany([
  {
    _id: 1,
    name: "Willow Restaurant",
    borough: "Brooklyn",
    cuisine: "American",
    location: {
      type: "Point",
      coordinates: [-65.754169, 40.724233]
    },
    grades: [
      { date: ISODate("2014-08-11T00:00:00Z"), grade: "A", score: 11 },
      { date: ISODate("2014-03-14T00:00:00Z"), grade: "B", score: 25 }
    ]
  },
  {
    _id: 2,
    name: "Dragon Palace",
    borough: "Queens",
    cuisine: "Chinese",
    location: {
      type: "Point",
      coordinates: [-63.754168, 41.724233]
    },
    grades: [
      { date: ISODate("2014-08-11T00:00:00Z"), grade: "A", score: 75 },
      { date: ISODate("2014-03-14T00:00:00Z"), grade: "A", score: 80 }
    ]
  },
  {
    _id: 3,
    name: "Regency Hotel",
    borough: "Bronx",
    cuisine: "American",
    location: {
      type: "Point",
      coordinates: [-66.754168, 42.724233]
    },
    grades: [
      { date: ISODate("2014-08-11T00:00:00Z"), grade: "B", score: 9 },
      { date: ISODate("2014-03-14T00:00:00Z"), grade: "A", score: 85 }
    ]
  },
  {
    _id: 4,
    name: "Spices",
    borough: "Staten Island",
    cuisine: "Indian",
    location: {
      type: "Point",
      coordinates: [-64.754168, 43.724233]
    },
    grades: [
      { date: ISODate("2014-08-11T00:00:00Z"), grade: "A", score: 95 },
      { date: ISODate("2014-03-14T00:00:00Z"), grade: "A", score: 90 }
    ]
  },
  {
    _id: 5,
    name: "Pieces",
    borough: "Queens",
    cuisine: "Italian",
    location: {
      type: "Point",
      coordinates: [-62.754168, 44.724233]
    },
    grades: [
      { date: ISODate("2014-08-11T00:00:00Z"), grade: "A", score: 71 },
      { date: ISODate("2014-03-14T00:00:00Z"), grade: "B", score: 65 }
    ]
  }
]);

db.hotels.find({
  cuisine: { $ne: "American" },
  "grades.score": { $gt: 70 },
  "location.coordinates.0": { $lt: -65.754168 }
});

db.hotels.find({
  cuisine: { $ne: "American" },
  "grades.grade": "A",
  borough: { $ne: "Brooklyn" }
}).sort({ cuisine: -1 });

db.hotels.find({
  name: /ces$/
}, {
  _id: 1,
  name: 1,
  borough: 1,
  cuisine: 1
});

db.hotels.find({
  name: /Reg/
}, {
  _id: 1,
  name: 1,
  borough: 1,
  cuisine: 1
});

db.hotels.find({
  borough: "Bronx",
  cuisine: { $in: ["American", "Chinese"] }
});

db.hotels.find({
  borough: { $in: ["Staten Island", "Queens", "Hyatt"] }
}, {
  _id: 1,
  name: 1,
  borough: 1,
  cuisine: 1
});

db.hotels.find({
  borough: { $nin: ["New Delhi", "Queens", "Hyatt"] }
}, {
  _id: 1,
  name: 1,
  borough: 1,
  cuisine: 1
});

db.hotels.find({
  "grades.score": { $not: { $gt: 10 } }
}, {
  _id: 1,
  name: 1,
  borough: 1,
  cuisine: 1
});

db.hotels.find({
  $or: [
    { cuisine: { $nin: ["American", "Chinese"] } },
    { name: /^Wil/ }
  ]
}, {
  _id: 1,
  name: 1,
  borough: 1,
  cuisine: 1
});

db.hotels.find({
  grades: {
    $elemMatch: {
      grade: "A",
      score: 11,
      date: ISODate("2014-08-11T00:00:00Z")
    }
  }
}, {
  _id: 1,
  name: 1,
  grades: 1
});
