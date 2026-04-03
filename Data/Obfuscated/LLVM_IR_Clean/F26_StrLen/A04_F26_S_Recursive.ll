define dso_local i32 @Tk5(i8* %0) {
  %2 = alloca i32
  %3 = alloca i8*
  store i8* %0, i8** %3
  %4 = load i8*, i8** %3
  %5 = load i8, i8* %4
  %6 = sext i8 %5 to i32
  %7 = icmp eq i32 %6, 0
  br i1 %7, label %8, label %9
8:
  store i32 0, i32* %2
  br label %14
9:
  %10 = load i8*, i8** %3
  %11 = getelementptr inbounds i8, i8* %10, i64 1
  %12 = call i32 @Tk5(i8* %11)
  %13 = add nsw i32 1, %12
  store i32 %13, i32* %2
  br label %14
14:
  %15 = load i32, i32* %2
  ret i32 %15
}
