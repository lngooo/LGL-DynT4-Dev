define dso_local i32 @aFi(i8* %0) {
  %2 = alloca i32
  %3 = alloca i8*
  store i8* %0, i8** %3
  %4 = load i8*, i8** %3
  %5 = load i8, i8* %4
  %6 = icmp ne i8 %5, 0
  br i1 %6, label %8, label %7
7:
  store i32 0, i32* %2
  br label %19
8:
  %9 = load i8*, i8** %3
  %10 = getelementptr inbounds i8, i8* %9, i64 1
  %11 = load i8, i8* %10
  %12 = icmp ne i8 %11, 0
  br i1 %12, label %14, label %13
13:
  store i32 1, i32* %2
  br label %19
14:
  %15 = load i8*, i8** %3
  %16 = getelementptr inbounds i8, i8* %15, i64 1
  %17 = call i32 @aFi(i8* %16)
  %18 = add nsw i32 1, %17
  store i32 %18, i32* %2
  br label %19
19:
  %20 = load i32, i32* %2
  ret i32 %20
}
