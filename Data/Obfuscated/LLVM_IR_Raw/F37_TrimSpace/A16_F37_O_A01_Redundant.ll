@.str = constant [4 x i8] c"%s\0A\00"
define dso_local void @Al(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  store i8* %0, i8** %2
  store i32 0, i32* %3
  store i32 0, i32* %4
  br label %8
8:
  %9 = load i8*, i8** %2
  %10 = load i32, i32* %3
  %11 = sext i32 %10 to i64
  %12 = getelementptr inbounds i8, i8* %9, i64 %11
  %13 = load i8, i8* %12
  %14 = icmp ne i8 %13, 0
  br i1 %14, label %15, label %54
15:
  %17 = load i32, i32* %3
  %18 = load i32, i32* %4
  %19 = add nsw i32 %17, %18
  store i32 %19, i32* %5
  %20 = call i16** @__ctype_b_loc()
  %21 = load i16*, i16** %20
  %22 = load i8*, i8** %2
  %23 = load i32, i32* %3
  %24 = sext i32 %23 to i64
  %25 = getelementptr inbounds i8, i8* %22, i64 %24
  %26 = load i8, i8* %25
  %27 = zext i8 %26 to i32
  %28 = sext i32 %27 to i64
  %29 = getelementptr inbounds i16, i16* %21, i64 %28
  %30 = load i16, i16* %29
  %31 = zext i16 %30 to i32
  %32 = and i32 %31, 8192
  %33 = icmp ne i32 %32, 0
  br i1 %33, label %50, label %34
34:
  %35 = load i32, i32* %5
  %36 = icmp sge i32 %35, 0
  br i1 %36, label %37, label %49
37:
  %38 = load i8*, i8** %2
  %39 = load i32, i32* %3
  %40 = sext i32 %39 to i64
  %41 = getelementptr inbounds i8, i8* %38, i64 %40
  %42 = load i8, i8* %41
  %43 = load i8*, i8** %2
  %44 = load i32, i32* %4
  %45 = sext i32 %44 to i64
  %46 = getelementptr inbounds i8, i8* %43, i64 %45
  store i8 %42, i8* %46
  %47 = load i32, i32* %4
  %48 = add nsw i32 %47, 1
  store i32 %48, i32* %4
  br label %49
49:
  br label %50
50:
  %51 = load i32, i32* %3
  %52 = add nsw i32 %51, 1
  store i32 %52, i32* %3
  br label %8
54:
  %55 = load i8*, i8** %2
  %56 = load i32, i32* %4
  %57 = sext i32 %56 to i64
  %58 = getelementptr inbounds i8, i8* %55, i64 %57
  store i8 0, i8* %58
  ret void
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
  br label %17
9:
  %10 = load i8**, i8*** %5
  %11 = getelementptr inbounds i8*, i8** %10, i64 1
  %12 = load i8*, i8** %11
  call void @Al(i8* %12)
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
