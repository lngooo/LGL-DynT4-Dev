define dso_local i32 @YUeq(i8* %0, i32 %1) {
  %3 = alloca i8*
  %4 = alloca i32
  store i8* %0, i8** %3
  store i32 %1, i32* %4
  %5 = load i8*, i8** %3
  %6 = load i8, i8* %5
  %7 = sext i8 %6 to i32
  %8 = icmp eq i32 %7, 0
  br i1 %8, label %9, label %11
9:
  %10 = load i32, i32* %4
  br label %17
11:
  %12 = load i8*, i8** %3
  %13 = getelementptr inbounds i8, i8* %12, i64 1
  %14 = load i32, i32* %4
  %15 = add nsw i32 %14, 1
  %16 = call i32 @YUeq(i8* %13, i32 %15)
  br label %17
17:
  %18 = phi i32 [ %10, %9 ], [ %16, %11 ]
  ret i32 %18
}
define dso_local i32 @OxfJ3(i8* %0) {
  %2 = alloca i8*
  store i8* %0, i8** %2
  %3 = load i8*, i8** %2
  %4 = call i32 @YUeq(i8* %3, i32 0)
  ret i32 %4
}
