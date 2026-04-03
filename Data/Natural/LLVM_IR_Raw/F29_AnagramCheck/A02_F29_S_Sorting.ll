@.str = constant [4 x i8] c"%d\0A\00"
define dso_local void @sort(i8* %0, i32 %1) {
  %3 = alloca i8*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i8
  store i8* %0, i8** %3
  store i32 %1, i32* %4
  store i32 0, i32* %5
  br label %10
10:
  %11 = load i32, i32* %5
  %12 = load i32, i32* %4
  %13 = sub nsw i32 %12, 1
  %14 = icmp slt i32 %11, %13
  br i1 %14, label %17, label %15
15:
  store i32 2, i32* %6
  br label %73
17:
  store i32 0, i32* %7
  br label %19
19:
  %20 = load i32, i32* %7
  %21 = load i32, i32* %4
  %22 = load i32, i32* %5
  %23 = sub nsw i32 %21, %22
  %24 = sub nsw i32 %23, 1
  %25 = icmp slt i32 %20, %24
  br i1 %25, label %28, label %26
26:
  store i32 5, i32* %6
  br label %69
28:
  %29 = load i8*, i8** %3
  %30 = load i32, i32* %7
  %31 = sext i32 %30 to i64
  %32 = getelementptr inbounds i8, i8* %29, i64 %31
  %33 = load i8, i8* %32
  %34 = sext i8 %33 to i32
  %35 = load i8*, i8** %3
  %36 = load i32, i32* %7
  %37 = add nsw i32 %36, 1
  %38 = sext i32 %37 to i64
  %39 = getelementptr inbounds i8, i8* %35, i64 %38
  %40 = load i8, i8* %39
  %41 = sext i8 %40 to i32
  %42 = icmp sgt i32 %34, %41
  br i1 %42, label %43, label %65
43:
  %44 = load i8*, i8** %3
  %45 = load i32, i32* %7
  %46 = sext i32 %45 to i64
  %47 = getelementptr inbounds i8, i8* %44, i64 %46
  %48 = load i8, i8* %47
  store i8 %48, i8* %8
  %49 = load i8*, i8** %3
  %50 = load i32, i32* %7
  %51 = add nsw i32 %50, 1
  %52 = sext i32 %51 to i64
  %53 = getelementptr inbounds i8, i8* %49, i64 %52
  %54 = load i8, i8* %53
  %55 = load i8*, i8** %3
  %56 = load i32, i32* %7
  %57 = sext i32 %56 to i64
  %58 = getelementptr inbounds i8, i8* %55, i64 %57
  store i8 %54, i8* %58
  %59 = load i8, i8* %8
  %60 = load i8*, i8** %3
  %61 = load i32, i32* %7
  %62 = add nsw i32 %61, 1
  %63 = sext i32 %62 to i64
  %64 = getelementptr inbounds i8, i8* %60, i64 %63
  store i8 %59, i8* %64
  br label %65
65:
  br label %66
66:
  %67 = load i32, i32* %7
  %68 = add nsw i32 %67, 1
  store i32 %68, i32* %7
  br label %19
69:
  br label %70
70:
  %71 = load i32, i32* %5
  %72 = add nsw i32 %71, 1
  store i32 %72, i32* %5
  br label %10
73:
  ret void
}
define dso_local i32 @AnagramCheck(i8* %0, i8* %1) {
  %3 = alloca i32
  %4 = alloca i8*
  %5 = alloca i8*
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca [256 x i8]
  %10 = alloca [256 x i8]
  store i8* %0, i8** %4
  store i8* %1, i8** %5
  %12 = load i8*, i8** %4
  %13 = call i64 @strlen(i8* %12)
  %14 = trunc i64 %13 to i32
  store i32 %14, i32* %6
  %16 = load i8*, i8** %5
  %17 = call i64 @strlen(i8* %16)
  %18 = trunc i64 %17 to i32
  store i32 %18, i32* %7
  %19 = load i32, i32* %6
  %20 = load i32, i32* %7
  %21 = icmp ne i32 %19, %20
  br i1 %21, label %22, label %23
22:
  store i32 0, i32* %3
  store i32 1, i32* %8
  br label %43
23:
  %26 = getelementptr inbounds [256 x i8], [256 x i8]* %9, i64 0, i64 0
  %27 = load i8*, i8** %4
  %28 = call i8* @strcpy(i8* %26, i8* %27)
  %29 = getelementptr inbounds [256 x i8], [256 x i8]* %10, i64 0, i64 0
  %30 = load i8*, i8** %5
  %31 = call i8* @strcpy(i8* %29, i8* %30)
  %32 = getelementptr inbounds [256 x i8], [256 x i8]* %9, i64 0, i64 0
  %33 = load i32, i32* %6
  call void @sort(i8* %32, i32 %33)
  %34 = getelementptr inbounds [256 x i8], [256 x i8]* %10, i64 0, i64 0
  %35 = load i32, i32* %7
  call void @sort(i8* %34, i32 %35)
  %36 = getelementptr inbounds [256 x i8], [256 x i8]* %9, i64 0, i64 0
  %37 = getelementptr inbounds [256 x i8], [256 x i8]* %10, i64 0, i64 0
  %38 = call i32 @strcmp(i8* %36, i8* %37)
  %39 = icmp eq i32 %38, 0
  %40 = zext i1 %39 to i32
  store i32 %40, i32* %3
  store i32 1, i32* %8
  br label %43
43:
  %46 = load i32, i32* %3
  ret i32 %46
}
declare i64 @strlen(i8*)
declare i8* @strcpy(i8*, i8*)
declare i32 @strcmp(i8*, i8*)
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %6 = load i32, i32* %4
  %7 = icmp slt i32 %6, 3
  br i1 %7, label %8, label %9
8:
  store i32 0, i32* %3
  br label %18
9:
  %10 = load i8**, i8*** %5
  %11 = getelementptr inbounds i8*, i8** %10, i64 1
  %12 = load i8*, i8** %11
  %13 = load i8**, i8*** %5
  %14 = getelementptr inbounds i8*, i8** %13, i64 2
  %15 = load i8*, i8** %14
  %16 = call i32 @AnagramCheck(i8* %12, i8* %15)
  %17 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i32 %16)
  store i32 0, i32* %3
  br label %18
18:
  %19 = load i32, i32* %3
  ret i32 %19
}
declare i32 @printf(i8*, ...)
