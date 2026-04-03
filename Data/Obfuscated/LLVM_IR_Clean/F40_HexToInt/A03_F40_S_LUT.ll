@ZY2.tfdn = internal constant <{ [103 x i32], [153 x i32] }> <{ [103 x i32] [i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 1, i32 2, i32 3, i32 4, i32 5, i32 6, i32 7, i32 8, i32 9, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 10, i32 11, i32 12, i32 13, i32 14, i32 15, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i32 10, i32 11, i32 12, i32 13, i32 14, i32 15], [153 x i32] zeroinitializer }>
define dso_local i32 @ZY2(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  store i8* %0, i8** %2
  store i32 0, i32* %3
  br label %5
5:
  %6 = load i8*, i8** %2
  %7 = load i8, i8* %6
  %8 = icmp ne i8 %7, 0
  br i1 %8, label %9, label %21
9:
  %10 = load i32, i32* %3
  %11 = mul nsw i32 %10, 16
  %12 = load i8*, i8** %2
  %13 = load i8, i8* %12
  %14 = zext i8 %13 to i64
  %16 = load i32, i32* %15
  %17 = add nsw i32 %11, %16
  store i32 %17, i32* %3
  br label %18
18:
  %19 = load i8*, i8** %2
  %20 = getelementptr inbounds i8, i8* %19, i32 1
  store i8* %20, i8** %2
  br label %5
21:
  %22 = load i32, i32* %3
  ret i32 %22
}
