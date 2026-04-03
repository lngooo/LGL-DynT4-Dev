define dso_local i32 @CharFrequency(i8* %0, i8 signext %1) {
  %3 = alloca i8*
  %4 = alloca i8
  store i8* %0, i8** %3
  store i8 %1, i8* %4
  %5 = load i8*, i8** %3
  %6 = load i8, i8* %5
  %7 = icmp ne i8 %6, 0
  br i1 %7, label %9, label %8
8:
  br label %23
9:
  %10 = load i8*, i8** %3
  %11 = load i8, i8* %10
  %12 = sext i8 %11 to i32
  %13 = load i8, i8* %4
  %14 = sext i8 %13 to i32
  %15 = icmp eq i32 %12, %14
  %16 = zext i1 %15 to i64
  %17 = select i1 %15, i32 1, i32 0
  %18 = load i8*, i8** %3
  %19 = getelementptr inbounds i8, i8* %18, i64 1
  %20 = load i8, i8* %4
  %21 = call i32 @CharFrequency(i8* %19, i8 signext %20)
  %22 = add nsw i32 %17, %21
  br label %23
23:
  %24 = phi i32 [ 0, %8 ], [ %22, %9 ]
  ret i32 %24
}
