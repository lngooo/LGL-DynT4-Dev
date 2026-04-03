@.str = constant [4 x i8] c"%s\0A\00"
define dso_local void @AXgR(i8* %0, i8* %1) {
  %3 = alloca i8*
  %4 = alloca i8*
  store i8* %0, i8** %3
  store i8* %1, i8** %4
  %5 = load i8*, i8** %3
  %6 = load i8, i8* %5
  %7 = icmp ne i8 %6, 0
  br i1 %7, label %10, label %8
8:
  %9 = load i8*, i8** %4
  store i8 0, i8* %9
  br label %34
10:
  %11 = call i16** @__ctype_b_loc()
  %12 = load i16*, i16** %11
  %13 = load i8*, i8** %3
  %14 = load i8, i8* %13
  %15 = zext i8 %14 to i32
  %16 = sext i32 %15 to i64
  %17 = getelementptr inbounds i16, i16* %12, i64 %16
  %18 = load i16, i16* %17
  %19 = zext i16 %18 to i32
  %20 = and i32 %19, 8192
  %21 = icmp ne i32 %20, 0
  br i1 %21, label %30, label %22
22:
  %23 = load i8*, i8** %3
  %24 = load i8, i8* %23
  %25 = load i8*, i8** %4
  store i8 %24, i8* %25
  %26 = load i8*, i8** %3
  %27 = getelementptr inbounds i8, i8* %26, i64 1
  %28 = load i8*, i8** %4
  %29 = getelementptr inbounds i8, i8* %28, i64 1
  call void @AXgR(i8* %27, i8* %29)
  br label %34
30:
  %31 = load i8*, i8** %3
  %32 = getelementptr inbounds i8, i8* %31, i64 1
  %33 = load i8*, i8** %4
  call void @AXgR(i8* %32, i8* %33)
  br label %34
34:
  ret void
}
declare i16** @__ctype_b_loc()
define dso_local void @sihz(i8* %0) {
  %2 = alloca i8*
  store i8* %0, i8** %2
  %3 = load i8*, i8** %2
  %4 = load i8*, i8** %2
  call void @AXgR(i8* %3, i8* %4)
  ret void
}
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %6 = load i32, i32* %4
  %7 = icmp slt i32 %6, 2
  br i1 %7, label %8, label %9
8:
  store i32 0, i32* %3
  br label %17
9:
  %10 = load i8**, i8*** %5
  %11 = getelementptr inbounds i8*, i8** %10, i64 1
  %12 = load i8*, i8** %11
  call void @sihz(i8* %12)
  %13 = load i8**, i8*** %5
  %14 = getelementptr inbounds i8*, i8** %13, i64 1
  %15 = load i8*, i8** %14
  %16 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i8* %15)
  store i32 0, i32* %3
  br label %17
17:
  %18 = load i32, i32* %3
  ret i32 %18
}
declare i32 @printf(i8*, ...)
