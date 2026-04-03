@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @cPQv(i8* %0, i8* %1) {
  %3 = alloca i32
  %4 = alloca i8*
  %5 = alloca i8*
  %6 = alloca i32
  %7 = alloca i32
  store i8* %0, i8** %4
  store i8* %1, i8** %5
  store i32 5, i32* %6
  br label %9
9:
  %10 = load i32, i32* %6
  %11 = icmp ne i32 %10, 0
  br i1 %11, label %12, label %58
12:
  %13 = load i32, i32* %6
  %14 = icmp eq i32 %13, 5
  br i1 %14, label %15, label %36
15:
  %16 = load i8*, i8** %4
  %17 = load i8, i8* %16
  %18 = sext i8 %17 to i32
  %19 = icmp ne i32 %18, 0
  br i1 %19, label %20, label %34
20:
  %21 = load i8*, i8** %5
  %22 = load i8, i8* %21
  %23 = sext i8 %22 to i32
  %24 = icmp ne i32 %23, 0
  br i1 %24, label %25, label %34
25:
  %26 = load i8*, i8** %4
  %27 = load i8, i8* %26
  %28 = sext i8 %27 to i32
  %29 = load i8*, i8** %5
  %30 = load i8, i8* %29
  %31 = sext i8 %30 to i32
  %32 = icmp eq i32 %28, %31
  br i1 %32, label %33, label %34
33:
  store i32 10, i32* %6
  br label %35
34:
  store i32 15, i32* %6
  br label %35
35:
  br label %57
36:
  %37 = load i32, i32* %6
  %38 = icmp eq i32 %37, 10
  br i1 %38, label %39, label %44
39:
  %40 = load i8*, i8** %4
  %41 = getelementptr inbounds i8, i8* %40, i32 1
  store i8* %41, i8** %4
  %42 = load i8*, i8** %5
  %43 = getelementptr inbounds i8, i8* %42, i32 1
  store i8* %43, i8** %5
  store i32 5, i32* %6
  br label %56
44:
  %45 = load i32, i32* %6
  %46 = icmp eq i32 %45, 15
  br i1 %46, label %47, label %55
47:
  %48 = load i8*, i8** %4
  %49 = load i8, i8* %48
  %50 = zext i8 %49 to i32
  %51 = load i8*, i8** %5
  %52 = load i8, i8* %51
  %53 = zext i8 %52 to i32
  %54 = sub nsw i32 %50, %53
  store i32 %54, i32* %3
  store i32 1, i32* %7
  br label %59
55:
  br label %56
56:
  br label %57
57:
  br label %9
58:
  store i32 0, i32* %3
  store i32 1, i32* %7
  br label %59
59:
  %61 = load i32, i32* %3
  ret i32 %61
}
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
  %16 = call i32 @cPQv(i8* %12, i8* %15)
  %17 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i32 %16)
  store i32 0, i32* %3
  br label %18
18:
  %19 = load i32, i32* %3
  ret i32 %19
}
declare i32 @printf(i8*, ...)
