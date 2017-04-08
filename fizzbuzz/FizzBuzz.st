"My first attempt at a SmallTalk implementation. Worked on the first run.
  Yes, it's a bit ugly and inefficient."
1 to: 100 do:
  [ :i |
    (i % 3 = 0) ifTrue: [ Transcript show: 'Fizz' ].
    (i % 5 = 0) ifTrue: [ Transcript show: 'Buzz' ].
    (i % 3 = 0) ifFalse: [ (i % 5 = 0) ifFalse: [ Transcript show: i asString ]].
    Transcript show: ''; cr.
  ].
