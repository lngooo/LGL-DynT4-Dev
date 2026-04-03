@.str = constant [4 x i8] c"%s\0A\00"
define dso_local void @tr(i8* %0, i32 %1, i32 %2) {
  %4 = alloca i8*
  %5 = alloca i32
  %6 = alloca i32
  store i8* %0, i8** %4
  store i32 %1, i32* %5
  store i32 %2, i32* %6
  %7 = load i8*, i8** %4
  %8 = load i32, i32* %5
  %9 = sext i32 %8 to i64
  %10 = getelementptr inbounds i8, i8* %7, i64 %9
  %11 = load i8, i8* %10
  %12 = icmp ne i8 %11, 0
  br i1 %12, label %18, label %13
13:
  %14 = load i8*, i8** %4
  %15 = load i32, i32* %6
  %16 = sext i32 %15 to i64
  %17 = getelementptr inbounds i8, i8* %14, i64 %16
  store i8 0, i8* %17
  br label %53
18:
  %19 = call i16** @__ctype_b_loc()
  %20 = load i16*, i16** %19
  %21 = load i8*, i8** %4
  %22 = load i32, i32* %5
  %23 = sext i32 %22 to i64
  %24 = getelementptr inbounds i8, i8* %21, i64 %23
  %25 = load i8, i8* %24
  %26 = zext i8 %25 to i32
  %27 = sext i32 %26 to i64
  %28 = getelementptr inbounds i16, i16* %20, i64 %27
  %29 = load i16, i16* %28
  %30 = zext i16 %29 to i32
  %31 = and i32 %30, 8192
  %32 = icmp ne i32 %31, 0
  br i1 %32, label %48, label %33
33:
  %34 = load i8*, i8** %4
  %35 = load i32, i32* %5
  %36 = sext i32 %35 to i64
  %37 = getelementptr inbounds i8, i8* %34, i64 %36
  %38 = load i8, i8* %37
  %39 = load i8*, i8** %4
  %40 = load i32, i32* %6
  %41 = sext i32 %40 to i64
  %42 = getelementptr inbounds i8, i8* %39, i64 %41
  store i8 %38, i8* %42
  %43 = load i8*, i8** %4
  %44 = load i32, i32* %5
  %45 = add nsw i32 %44, 1
  %46 = load i32, i32* %6
  %47 = add nsw i32 %46, 1
  call void @tr(i8* %43, i32 %45, i32 %47)
  br label %53
48:
  %49 = load i8*, i8** %4
  %50 = load i32, i32* %5
  %51 = add nsw i32 %50, 1
  %52 = load i32, i32* %6
  call void @tr(i8* %49, i32 %51, i32 %52)
  br label %53
53:
  ret void
}
declare i16** @__ctype_b_loc()
define dso_local void @TrimSpace(i8* %0) {
  %2 = alloca i8*
  store i8* %0, i8** %2
  %3 = load i8*, i8** %2
  call void @tr(i8* %3, i32 0, i32 0)
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
  call void @TrimSpace(i8* %12)
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
