@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @RfG(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  store i8* %0, i8** %2
  store i32 0, i32* %3
  store i32 0, i32* %4
  store i32 0, i32* %5
  br label %9
9:
  %10 = load i32, i32* %5
  %11 = icmp ne i32 %10, -1
  br i1 %11, label %12, label %45
12:
  %13 = load i32, i32* %5
  switch i32 %13, label %44 [
    i32 0, label %14
    i32 1, label %21
  ]
14:
  %15 = load i8*, i8** %2
  %16 = load i8, i8* %15
  %17 = icmp ne i8 %16, 0
  br i1 %17, label %19, label %18
18:
  store i32 -1, i32* %5
  br label %20
19:
  store i32 1, i32* %5
  br label %20
20:
  br label %44
21:
  %22 = call i16** @__ctype_b_loc()
  %23 = load i16*, i16** %22
  %24 = load i8*, i8** %2
  %25 = load i8, i8* %24
  %26 = sext i8 %25 to i32
  %27 = sext i32 %26 to i64
  %28 = getelementptr inbounds i16, i16* %23, i64 %27
  %29 = load i16, i16* %28
  %30 = zext i16 %29 to i32
  %31 = and i32 %30, 8192
  %32 = icmp ne i32 %31, 0
  br i1 %32, label %33, label %34
33:
  store i32 0, i32* %4
  br label %41
34:
  %35 = load i32, i32* %4
  %36 = icmp eq i32 %35, 0
  br i1 %36, label %37, label %40
37:
  store i32 1, i32* %4
  %38 = load i32, i32* %3
  %39 = add nsw i32 %38, 1
  store i32 %39, i32* %3
  br label %40
40:
  br label %41
41:
  %42 = load i8*, i8** %2
  %43 = getelementptr inbounds i8, i8* %42, i32 1
  store i8* %43, i8** %2
  store i32 0, i32* %5
  br label %44
44:
  br label %9
45:
  %46 = load i32, i32* %3
  ret i32 %46
}
declare i16** @__ctype_b_loc()
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
  br label %15
9:
  %10 = load i8**, i8*** %5
  %11 = getelementptr inbounds i8*, i8** %10, i64 1
  %12 = load i8*, i8** %11
  %13 = call i32 @RfG(i8* %12)
  %14 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i32 %13)
  store i32 0, i32* %3
  br label %15
15:
  %16 = load i32, i32* %3
  ret i32 %16
}
declare i32 @printf(i8*, ...)
